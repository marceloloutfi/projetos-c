#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,x,fx;
  printf("Entre com o valor para (a): ");
  scanf("%d",&a);
  printf("Entre com o valor para (b): ");
  scanf("%d",&b);
  printf("\nfuncao gerada:\nf(x) = %dx + %d\n",a,b);
  printf("\nEntre com o valor de (x): ");
  scanf("%d",&x);
  fx = a*x+b;
  printf("f(%d) = %d.%d + %d = %d\n\n\n",x,a,x,b,fx);
  system("PAUSE");	
  return 0;
}
