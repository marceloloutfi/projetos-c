#include <stdio.h>

main(){
  int i,j;
  for(i=0;i<60;i++){
  system("CLS");
    for(j=0;j<i;j++){
      printf(" ");
    }
    printf("%c%c%c%c%c%c",186,186,219,219,220,17);
  }
  getch();
       
}
