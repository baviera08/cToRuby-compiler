//#include <stdio.h>
/*
doble declaracion de la variable c, en m = a + h, m no esta declarada anteriormente y le falta el ;
Error en la línea n cerca de "c": Variable declarada anteriormente.
Error en la línea n cerca de "m": Error, el identificador %s no ha sido definido
Error en la línea n cerca de "h": syntax error
Error en la línea n cerca de "h": Falta un ";"  en la sentencia.
Error en la línea n cerca de "d": Error, el identificador %s no ha sido definido
*/

int a[10];
char b[] = {'h','b','q','4','5','6','7'};
int c[30];
int variable;
int array[2][2] = {{1,2},{3,4}};

//asi define como una funcion normal, por lo que no funciona
//int funcion(int a, int b, int c);
//falta ; por la declaracion del x
//int x == int x;
//int x; == int x;

//int xhue1 hue2,hu3;
char laspe="a";
int amar=laspe;
//laspe=amar;


int test(){
	return 0;
}

int variable3;
int variable6;

int funcion(int a[], int b){
	return a+b;
}

int variable4;
int variable5;

void proced(int c, int d){
	int suma;
	int variable1;
	suma = funcion(c, d);
	return suma;
}

int main(){
	int i = 2, j = 3;
	variable = 3;
//	return proced(i, j);
}
