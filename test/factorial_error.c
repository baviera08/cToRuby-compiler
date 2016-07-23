/*
falta ( en el primer if
Error en la linea n cerca de "numero": syntax error
Error en la linea n cerca de "1": Falta un "(" despues de continue en la sentencia del if.
Error en la linea n cerca de "1": syntax error
Error en la linea n cerca de "aux": syntax error
*/
double factorial (int numero)
{
  int aux;
  if numero == 0 || numero == 1){
      return 1;
  }
  else
  {
    aux = numero -1;
    return (numero * factorial (aux));
  }
}


void main()
{
  int n;
  n = 5;
  factorial(n);
}
