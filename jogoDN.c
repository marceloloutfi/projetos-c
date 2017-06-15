# include <stdio.h>

main(){
 char j1[50];
 char j2[50];
 char num1;
 char num2;
 
 printf("\n\n---------------------\n");       
 printf("- DESCUBRA O NUMERO -\n");      
 printf("---------------------\n");

 printf("\nEntre com o nome do primeiro jogador:");
 gets(j1);

 printf("Entre com o nome do segundo jogador:");
 gets(j2);
 
 printf("\n%s, Escolha um numero entre 0 e 9: ",j1);
 num1 = getch();
 
 printf("\n%s, Adivinhe o numero que %s escolheu: ",j2,j1);
 num2 = getche(); 
  if(num1!='0'&& 
    num1!='1'&&
    num1!='2'&&
    num1!='3'&&
    num1!='4'&&
    num1!='5'&&
    num1!='6'&&
    num1!='7'&&
    num1!='8'&&
    num1!='9'){
     printf("\n\n%s E O VENCEDOR, pois %s escolheu um caracter difente de numeros.",j2,j1);         
 } else if(num1==num2){
     printf("\n\n%s E O VENCEDOR!!!",j2);
 } else {
     printf("\n\n%s E O VENCEDOR!!!",j1);
 }
 
 getch();
}
