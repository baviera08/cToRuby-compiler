%{
#include <stdio.h>
#include <string.h>

/*Estructura de datos para links en lookahead cadena de símbolos*/
struct symrec
{
    char *name;             /* nombre del símbolo */
    int type;               /* tipo del símbolo */
    double value;           /* valor de lookahead variable */
    int function;
    struct symrec *next;    /* puntero al próximo registro */
};

typedef struct symrec symrec;

/*Tabla de símbolos*/
extern symrec *sym_table;

symrec *putsym ();
symrec *getsym ();

extern int yylex(void);
// Archivo fuente a ser traducido
extern FILE *yyin;
// Reconoce tokens del input y es retornado al parser
extern char *yytext;
// Numero de linea del codigo fuente
extern int yylineno;

// Archivo objeto con la
FILE *yysalida;
symrec *sym_table = (symrec *)0;
symrec *s;
symrec *symtable_set_type;

int esFuncion=0;
// Bandera de error
int error=0;
int global = 0;
int ind = 0;
int noParams = 0;
int funcDef = 0;
int guardarExpresion = 0;
int bandFunc = 0;

void indentar(){
    int tmpInd = ind;
    while (tmpInd > 0){
        fprintf(yysalida, "\t");
        tmpInd -= 1;
    }
}

%}

%union
{
	int tipo;
	double val;
	char *nombre;
	struct symrec *tptr;
}

%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR CONTINUE BREAK RETURN

%token <nombre> IDENTIFIER CONSTANT SIZEOF
%token <tipo> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOID

%type <tipo> type_specifier declaration_specifiers type_qualifier
%type <nombre> init_direct_declarator direct_declarator declarator init_declarator init_declarator_list function_definition
%type <nombre> parameter_type_list parameter_list parameter_declaration array_list array_declaration
%type <nombre> initializer initializer_list
%type <tptr> declaration

%left INC_OP DEC_OP

%nonassoc IF_AUX
%nonassoc ELSE

%start translation_unit

%%
primary_expression
	/* En caso de ser un identificador, ya guarda el mismo identificador en el archivo */
	: IDENTIFIER { fprintf(yysalida, "%s", yytext); }
  // {
  //
  //   if(!getsym($1) && !esFuncion){
  //     yyerror("Error, el identificador %s no ha sido definido", $1);
  //     yyerrok;
  //   }else{
  //     //$.val = $1.val;
  //     //$.tipo = getTipo($1);
  //   }
  // }

//  { fprintf(yysalida, "%s", yytext); }
	| CONSTANT { fprintf(yysalida, "%s", yytext); }
	| open_parenthesis expression close_parenthesis
	;

/* Son los Tokens que guarda en el archivo */
postfix_expression
	: primary_expression
	| postfix_expression open_bracket  expression close_bracket
	| postfix_expression open_parenthesis close_parenthesis
	| postfix_expression open_parenthesis argument_expression_list close_parenthesis
	| postfix_expression INC_OP { fprintf(yysalida, "+=1"); }
	| postfix_expression DEC_OP { fprintf(yysalida, "-=1"); }
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' { fprintf(yysalida, ", "); } assignment_expression
	;

unary_expression
	: postfix_expression
	/* operacion de incremento decremento que guarda en el archivo yysalida pero como en ruby no hay ++ le pusimos como += */
	| INC_OP { fprintf(yysalida, "+=1"); } unary_expression
	| DEC_OP { fprintf(yysalida, "-=1"); } unary_expression
	| unary_operator cast_expression
  | SIZEOF unary_expression
//  | SIZEOF '(' { fprintf(yysalida, "("); } type_name ')' { fprintf(yysalida, ")"); }
	;

unary_operator
	: '&' { fprintf(yysalida, " & "); }
	| '*' { fprintf(yysalida, " * "); }
	| '+' { fprintf(yysalida, " + "); }
	| '-' { fprintf(yysalida, " - "); }
	| '~' { fprintf(yysalida, " ~ "); }
	| '!' { fprintf(yysalida, " ! "); }
	;

cast_expression
	: unary_expression
//  | open_parenthesis type_name close_parenthesis cast_expression
	;

/* Operadores de multiplicacion, division, mod */
multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' mult cast_expression
  | multiplicative_expression '*'  mult error { yyerrok;}
  | multiplicative_expression '/' div cast_expression
  | multiplicative_expression '/' div error { yyerrok;}
  | multiplicative_expression '%' mod cast_expression
  | multiplicative_expression '%'  mod error { yyerrok;}

  ;
/* Operadores de suma, resta */
additive_expression
	: multiplicative_expression
	| additive_expression '+' add multiplicative_expression
	| additive_expression '-' sub multiplicative_expression
  | additive_expression '+' add error { yyerrok;}
	| additive_expression '-' sub error { yyerrok;}
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP { fprintf(yysalida, " << "); } additive_expression
	| shift_expression RIGHT_OP { fprintf(yysalida, " >> "); } additive_expression
	;

/* Operadores relacionales  */
relational_expression
	: shift_expression
  | relational_expression '<' l_op shift_expression
	| relational_expression '>' g_op shift_expression
	| relational_expression '<' l_op error {yyerrok;}
	| relational_expression '>' g_op error {yyerrok;}
	| relational_expression LE_OP le_op shift_expression
	| relational_expression GE_OP ge_op shift_expression
	;

/* Operadores de igualdad, igual y distinto */
equality_expression
	: relational_expression
  | equality_expression EQ_OP eq_op relational_expression
	| equality_expression NE_OP ne_op relational_expression
	| equality_expression EQ_OP eq_op error {yyerrok;}
	| equality_expression NE_OP ne_op error {yyerrok;}
  ;

and_expression
	: equality_expression
	| and_expression '&' { fprintf(yysalida, " & "); } equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' { fprintf(yysalida, " ^ "); } and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' { fprintf(yysalida, " | "); } exclusive_or_expression
	;

/* Operador AND logico */
logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP { fprintf(yysalida, " && "); } inclusive_or_expression
	| logical_and_expression AND_OP { fprintf(yysalida, " && "); } error {yyerrok;}
  ;

/* Operador OR logico */
logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP { fprintf(yysalida, " || "); } logical_and_expression
  | logical_or_expression OR_OP { fprintf(yysalida, " || "); } error {yyerrok;}
  ;

/* Expresion condicional */
conditional_expression
	: logical_or_expression
	| logical_or_expression '?' { fprintf(yysalida, " ? "); } expression ':' { fprintf(yysalida, " : "); } conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
  | error assignment_operator assignment_expression {yyerrok;}
	;

assignment_operator
	: '=' { fprintf(yysalida, " = "); }
	| MUL_ASSIGN { fprintf(yysalida, " *= "); }
	| DIV_ASSIGN { fprintf(yysalida, " /= "); }
	| MOD_ASSIGN { fprintf(yysalida, " %%= "); }
	| ADD_ASSIGN { fprintf(yysalida, " += "); }
	| SUB_ASSIGN { fprintf(yysalida, " -= "); }
	| LEFT_ASSIGN { fprintf(yysalida, " <<= "); }
	| RIGHT_ASSIGN { fprintf(yysalida, " >>= "); }
	| AND_ASSIGN { fprintf(yysalida, " &= "); }
	| XOR_ASSIGN { fprintf(yysalida, " ^= "); }
	| OR_ASSIGN { fprintf(yysalida, " |= "); }
	;

expression
	: assignment_expression
	| expression ',' { fprintf(yysalida, ", "); } assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
  : declaration_specifiers init_declarator_list ';'
	{
		for(symtable_set_type=sym_table; symtable_set_type!=(symrec *)0; symtable_set_type=(symrec *)symtable_set_type->next)
		{
			if(symtable_set_type->type==-1)
			{
				symtable_set_type->type=$1;
			}
		}
		//fprintf(yysalida, "\n");

	}
	| declaration_specifiers init_declarator_list error { yyerror("Falta un \";\". "); yyerrok; }
//  | declaration_specifiers  error { yyerror("Falta un \";\". "); yyerrok; }
	;

declaration_specifiers
	: type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator {

      s = getsym($1);
    	if(s==(symrec *)0){
    		s = putsym($1);
    	}
    	else{
    		yyerror("Variable declarada anteriormente.");
    		yyerrok;
    	}


  }
	| init_declarator_list ',' init_declarator   { fprintf(yysalida, "\n"); indentar(); }
    {s = getsym($3);
      if(s==(symrec *)0){
        s = putsym($3);
      }else{
        yyerror("Variable declarada anteriormente.");
        yyerrok;
      }
    }
  | init_declarator_list ',' error {yyerror("Error. se recibe una ',' de mas.");}
	;

init_declarator
	: declarator
	| init_direct_declarator '=' initializer { fprintf(yysalida, "%s", $3); }

	;

type_specifier
	: CHAR
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| VOID
	;

declarator
	: direct_declarator
	;

direct_declarator
	: IDENTIFIER { if (!esFuncion) fprintf(yysalida, "", $1); else esFuncion = 0; }
	| IDENTIFIER '[' ']' { if (!esFuncion) fprintf(yysalida, " %s = [] \n", $1); else esFuncion = 0; }
	| IDENTIFIER array_list { if (!esFuncion) fprintf(yysalida, "%s = [%s] \n", $1, $2); else esFuncion = 0; indentar();}
  | IDENTIFIER '[' CONSTANT ']' {fprintf(yysalida, "%s = Array.new(%s) \n",$1,$3);	indentar();}
  //Para funcion
  | IDENTIFIER '(' ')' { if (!esFuncion) fprintf(yysalida, "def %s()", $1); else esFuncion = 0; }
	| IDENTIFIER '(' parameter_type_list ')' { if (!esFuncion) fprintf(yysalida, "def %s(%s)", $1, $3); else esFuncion = 0; }
  ;

init_direct_declarator
	: IDENTIFIER { if (!esFuncion) fprintf(yysalida, "%s = ", $1); else esFuncion = 0; }
	| IDENTIFIER array_declaration { if (!esFuncion) fprintf(yysalida, "%s = ", $1); else esFuncion = 0;	indentar(); }
	| IDENTIFIER array_list { if (!esFuncion) fprintf(yysalida, "%s = ", $1); else esFuncion = 0; }
	;

array_list
	: array_declaration
	| array_list array_declaration { asprintf(&$$, "%s,%s", $1, $2); }
	;

array_declaration
	: '[' ']' { asprintf(&$$, "[] "); indentar(); }
	| '[' CONSTANT ']' { asprintf(&$$, "[%s] ",$2); indentar();}
	;

parameter_type_list
	: parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration { asprintf(&$$, "%s, %s", $1, $3); }
	;

parameter_declaration
	: { esFuncion = 1; } declaration_specifiers declarator { $$ = $3; } // putsym($3)
	//| declaration_specifiers
	;

initializer_list
	: initializer
	| initializer_list ',' initializer { asprintf(&$$, "%s, %s", $1, $3); }
	;

initializer
	: IDENTIFIER /*primary_expression*/
	| CONSTANT
	| '{' initializer_list '}' { asprintf(&$$, "[%s] \n", $2); }
	;

type_qualifier
	: CONST { fprintf(yysalida, "const "); }
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: CASE { fprintf(yysalida, "case "); } constant_expression ':' { fprintf(yysalida, ": "); } statement
	| DEFAULT { fprintf(yysalida, "default "); } ':' { fprintf(yysalida, ": "); } statement
	;

  open_curly: '{' {
  		// if(global && scopes->prev == NULL)
  		// 	printVars();
  		//vars = NULL;

  		fprintf(yysalida,"\n");
  		ind += 1; indentar();
  //		pushScope(crearScope());
  //		agregarVarsAScope();
  		funcDef = 0;
  //		parametros = NULL;
  	}
  	;

  close_curly: '}' {
  		// printVars();
  		fprintf(yysalida,"\n");
  		ind -= 1; indentar();
//      fprintf(yysalida,"end \n");
//      indentar();
  	}
  	;

  semi_colon: ';' {fprintf(yysalida,"\n"); indentar();}
  ;

  open_parenthesis: '(' {fprintf(yysalida,"(");}
  	;
  close_parenthesis: ')' {fprintf(yysalida,")");}
  	;

  open_bracket: '['
  	{fprintf(yysalida, "[");}
  	;
  close_bracket: ']'
  	{fprintf(yysalida, "]");}
  	;

  mod:
  	{fprintf(yysalida," %% ");}
  	;

  mult:
  	{fprintf(yysalida," * ");}
  	;

  div:
  	{fprintf(yysalida," / ");}
  	;

  add:
  	{fprintf(yysalida," + ");}
  	;

  sub:
  	{fprintf(yysalida," - ");}
  	;

  l_op:
  	{fprintf(yysalida," < ");}
  	;

  g_op:
  	{fprintf(yysalida," > ");}
  	;

  le_op:
  	{fprintf(yysalida," <= ");}
  	;

  ge_op:
  	{fprintf(yysalida," >= ");}
  	;

  eq_op:
  	{fprintf(yysalida," == ");}
  	;

  ne_op:
  	{fprintf(yysalida," != ");}
  	;

compound_statement
  : open_curly close_curly
  | open_curly statement_list close_curly
  | open_curly declaration_list close_curly
  | open_curly declaration_list statement_list close_curly
  | '{' error { yyerror("Falta un \"}\"."); yyerrok; }
  ;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: semi_colon
	| expression semi_colon
  | expression error {yyerror("Falta un \";\"  en la sentencia.");yyerrok;}
	;

else_statement
	: ELSE { fprintf(yysalida, "else"); }  statement
	| %prec IF_AUX
	;
if: IF {fprintf(yysalida,"if");}
	;

  selection_statement
	: if open_parenthesis expression close_parenthesis statement  else_statement {fprintf(yysalida,"end\n"); indentar(); }
  | if error expression close_parenthesis statement {yyerror("Falta un \"(\" despues de la sentencia if.");yyerrok;}
	| SWITCH { fprintf(yysalida, "switch"); } open_parenthesis expression close_parenthesis statement {fprintf(yysalida,"end\n"); indentar();}
	;
  while: WHILE {fprintf(yysalida,"while ");}
  	;
iteration_statement
	: while '('  expression ')' {fprintf(yysalida," do");} statement {fprintf(yysalida,"end\n"); indentar();}
  | while error expression ')'  statement  {yyerror("Falta un \"(\" el while no se definio.");yyerrok;}
  | DO statement WHILE open_parenthesis expression close_parenthesis semi_colon
  | FOR open_parenthesis expression_statement expression_statement close_parenthesis statement
  | FOR open_parenthesis expression_statement expression_statement expression close_parenthesis statement
	;

jump_statement
	: CONTINUE { fprintf(yysalida, "continue"); } semi_colon
	| BREAK { fprintf(yysalida, "break"); } semi_colon
	| RETURN { fprintf(yysalida, "return"); } semi_colon
	| RETURN { fprintf(yysalida, "return "); } expression semi_colon
	| CONTINUE error { yyerror("Falta un \";\" despues de continue en la sentencia."); yyerrok; }
	| BREAK error { yyerror("Falta un \";\" despues de break en la sentencia."); yyerrok;}
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator compound_statement {fprintf(yysalida,"end\n"); indentar();}
	{

		s = getsym($2);
		if(s==(symrec *)0)
		{
			s = putsym($2,$1,1);
		}
		else
		{
			printf("Funcion declarada anteriormente.");
			yyerrok;
		}
	}
	| declarator declaration_list compound_statement {fprintf(yysalida,"end\n"); indentar();}
  	| declarator compound_statement {fprintf(yysalida,"end\n"); indentar();}
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

%%


#include <stdio.h>

yyerror(s)
char *s;
{
	error=1;
	printf("Error en la línea %d cerca de \"%s\": %s\n", yylineno, yylval.nombre, s);
}

symrec * putsym(sym_name, sym_type, b_function)
	char *sym_name;
	int sym_type;
	int b_function;
{
	//Solo para debug
	/*printf("\t%s, %d, %d\n", sym_name,
			sym_type,
			b_function);*/

	symrec *ptr;
	ptr = (symrec *) malloc(sizeof(symrec));
	ptr->name = (char *) malloc(strlen(sym_name) + 1);
	strcpy(ptr->name, sym_name);
	ptr->type = sym_type;
	ptr->value = 0; //set value to 0
	ptr->function = b_function;
	ptr->next =(struct symrec *) sym_table;
	sym_table = ptr;
	return ptr;
}
symrec * getsym(sym_name)
	char *sym_name;
{
	symrec *ptr;
	for(ptr = sym_table; ptr != (symrec*)0; ptr = (symrec *)ptr->next)
		if(strcmp(ptr->name, sym_name) == 0)
		{
			return ptr;
		}
	return 0;
}

const char *tipo_id(int tipo)
{
	switch(tipo)
	{
		case(282):
			return "CHAR";
		case(283):
			return "SHORT";
		case(284):
			return "INT";
		case(285):
			return "LONG";
		case(286):
			return "SIGNED";
		case(287):
			return "UNSIGNED";
		case(288):
			return "FLOAT";
		case(289):
			return "DOUBLE";
		case(290):
			return "CONST";
		case(291):
			return "VOID";
		default:
			return "NO";
	}
}

const char *tipo_var(int tipo)
{
	switch(tipo)
	{
		case(1):
			return "Funcion";
		case(0):
			return "Variable";
		default:
			return "NO";
	}
}

int main(int argc,char **argv)
{
	// 3 parametros, ejecutable.exe /path/to/fuente.c /path/to/objeto.rb
	if (argc<3)
	{
		printf("Faltan uno o mas parametros para su uso correcto \n EJ: %s archivo.c archivo.rb\n", argv[0]);
		return 0;
	}
	if ((yyin = fopen(argv[1],"rt")) == NULL)
	{
		printf("No se pudo abrir el archivo.\n");
                return 0;
	}
	if ((yysalida=fopen(argv[2], "w")) == NULL)
	{
		printf("No se pudo abrir el archivo.\n");
                return 0;
	}

	// Iniciar la traducción
	yyparse();

	// Cerrar los archivos de lectura y escritura
  fprintf(yysalida, "\nmain()\n");
	fclose(yyin);
	fclose(yysalida);

	if(error)
	{
		printf("\n ERRORES al realizar la traducción : %s\n", argv[1]);
	}
	else
	{
		printf("\nT SUCCESS : %s\nArchivo traducido: %s\n", argv[1], argv[2]);
	}

	return 0;
}
