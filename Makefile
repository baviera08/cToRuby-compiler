all: todo

y.tab.c y.tab.h:	sintactico.y
	bison -yd sintactico.y

lex.yy.c: lexico.l y.tab.h
	flex lexico.l

todo: lex.yy.c y.tab.c y.tab.h
	gcc -o ejecutable y.tab.c lex.yy.c -lfl

clean:
	rm ejec sintactico y.tab.c y.tab.h sintactico.tab.c lex.yy.c sintactico.tab.h
