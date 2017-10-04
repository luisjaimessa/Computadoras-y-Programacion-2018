#include <stdio.h>
#include <stdlib.h>
/*Programa que pida un número y diga si es par o impar*/
int main()
{
    int num=0;
    printf("INGRESA CUALQUIER NUMERO ENTERO\n");
    scanf("%d",&num);
    if(num%2 == 0){
              printf("EL NUMERO ES PAR\n");
              }
              else{
                   printf("EL NUMERO ES IMPAR\n");
                   }
  
  system("PAUSE");	
  return 0;
}
