# include <stdio.h>
# include <conio.h>

main(){
 char j1[50], j2[50], seq[100], seqJogadores[100];
 int errou,i,cont;
 cont=0;
 errou=0;
 
 printf("\nEntre com o nome do primeiro jogador:");
 gets(j1);
 printf("Entre com o nome do segundo jogador:");
 gets(j2);

while(!errou){
 system("CLS");
 if(cont%2==0){
   printf("%s: ",j1);
   gets(seqJogadores);
 } else {
   printf("%s: ",j2);
   gets(seqJogadores);
 }
 if(strlen(seqJogadores)==1){
   if(cont==0){
     strcpy(seq, seqJogadores);
   } else {
     errou=1;
   } 
 } else {
   for(i=0;i<cont;i++){
     if(seq[i]!=seqJogadores[i]){
       errou=1;
     }
   }
 }
 
 if(errou==0){
   seq[cont]=seqJogadores[cont];
 }
 cont++;
}

if(cont%2==0){
  printf("\n%s errou a sequencia... \n",j2);
} else {
  printf("\n%s errou a sequencia... \n",j1);
}
  printf("SEQUENCIA CORRETA:  %s\n",seq);
  printf("SEQUENCIA DIGITADA: %s\n",seqJogadores);
  
 getch();
}
