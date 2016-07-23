Funcionalidades

Loops: Reconoce y traduce WHILE.
Estructuras condicionales: Reconoce y traduce IF ELSE, SWITCH.
Contempla estructuras anidadas.
Reconoce declaraciones de funciones y procedimientos.(también llamadas a funciones).
Reconoce vectores y arrays multidimensionales. Para las matrices la única opción es como el siguiente ejemplo: int myMatriz1[2][2] = {{1,2},{3,4}};
Declaración de variables.
Expresiones aritméticas.
Comprobación y recuperación de errores.
Asignaciones.
Limitaciones

No se considera el scope al declarar variables, no se hace un chequeo de variables repetidas.
En algunos casos las  declaraciones de variables inicializadas con expresiones no se
interpretan apropiadamente. Dicho caso se soluciona declarando la variable e inicializando en
una sentencia aparte (el caso de un número negativo).
Todas las funciones deben ir arriba del main.
Se omitieron los modificadores static, extern, register y const para mayor practicidad

Características no soportadas 

Punteros
No se permite la definición de apuntadores junto con todas las consecuencias y dependencias
que ello implica.

Métodos de Input y Output
Se decidió no incluir en la traducción ningún método de entrada o salida, debido principalmente a que al encontrarse con la llamada a éstas funciones, el detector de errores identificará un error semántico, ya que no existe la definición previa de estas funciones. Se podrían implementar agregando producciones en el no terminal postfix − expression. 

Funcionalidades del Pre - Procesador
El procesamiento de  librerías externas a través del preprocesador de C fue dejada de lado por la magnitud que podría llegar a acarrear, debido a que habría que tomar y procesar de forma recursiva todas y cada una de las funciones definidas en dicha libería.

Matrices.
Como en Ruby para la declaración y manejo de matrices se necesita incluir un módulo llamado “matrix” y como no lo llegamos a implementar intentamos usar una cualidad de ruby el cual puede manejar un lista de lista y como el acceso a sus elementos es similar a la de una matriz simulamos la misma con ella.

Comprobación y Recuperaciń de Errores
El traductor consta de un detector de errores sintácticos y semánticos. Para los errores
sintácticos fueron implementadas producciones adicionales que detectaban algún tipo de
anomalía en cierto contenido de la gramática lo cual permitía seguir analizando el resto de
la entrada sin detenerse en el primer error sintáctico. Otro método al cual está sujeta la
gramática es la recuperación por modo pánico, que consta en identificar un punto en la
gramática propenso a errores y un token especial error sincronizándolo hasta un punto
posible donde pueda seguir la traducción.

Instrucciones de Uso
El entorno en el cual fue desarrollado  el traductor y herramientas correctas para su ejecución.

• Sistema Operativo: GNU/Linux 64 bits. (desarrollado en Ubuntu 16.04)
• Herramientas de compilación:
 gcc 5.3.1
 bison 3.0.4
 lex 2.6.0

Para la compilación, se dispone de un Makefile llamado Makefile. Posicionarse en la carpeta del proyecto donde se encuentra el archivo de compilación mencionado.

Make all:
Realiza la compilación de todo el traductor generando todos los archivos necesario, llamando a todo

Make todo:
Realiza esta accion	gcc -o ejecutable y.tab.c lex.yy.c -lfl

Make clean:
Borra los archivos que pueden ser generados al compilar.	
rm ejecutable sintáctico y.tab.c y.tab.h sintactico.tab.c lex.yy.c sintactico.tab.h

Para hacerlo Manualmente

flex lexico.l

bison -yd sintactico.y

gcc lex.yy.c y.tab.c -o ejecutable

Obs: La gramática utilizada presenta algunas ambigüedades. Al ejecutar el BISON, se
generan advertencias de desplazamiento/reducción y reducción/reducción, las cuales las
soluciona por omisión.

El programa objeto generado se llamará ejecutable, ejecutar:
 $ ./ejecutable  archivoFuente.c archivoDestino.rb

Este comando traduce el archivo C archivoFuente.c , y escribe el resultado en el archivo archivoDestino.rb.


El archivoFuente.c puede ser cualquiera de los proveídos en la carpeta entregada. Si
existen errores sintácticos o semánticos, se mostrarán en pantalla. Para corroborar la
traducción se puede verificar en los archivos generados para cada caso.

Ejemplo de un proceso exitoso:
• $ make all
• $ ./ejecutable fibonacci.c programa.rb
• $ cat programa.rb
