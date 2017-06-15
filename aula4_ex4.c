#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dias, horas, minutos;
  long int segundos;
  printf("Entre com a quantidade de dias: ");
  scanf("%d",&dias);
  horas = dias*24;
  minutos = horas*60;
  segundos = minutos*60;
  printf("%d dias equivalem a %d horas ou %d minutos ou %d segundos.\n\n",dias,horas,minutos,segundos);
  system("PAUSE");	
  return 0;
}
