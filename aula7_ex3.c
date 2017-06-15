#include <stdio.h>

main(){
  char j1[30], j2[30];
  int quantidade, contador;
  contador=0;
  printf("Entre com o primeiro nome:");
  gets(j1);
  printf("Entre com o segundo nome:");
  gets(j2);
  printf("Entre com a quantidade:");
  scanf("%d",&quantidade);

  do {
    contador++;
    if(contador%2==1){
      printf("%d -> %s\n",contador, j1);
    } else {
      printf("%d -> %s\n",contador, j2);
    }                  
  } while (contador<quantidade);
  
  getch();
       
}
