#include <stdio.h>



int main(int argc, char *argv[])
{
    
   int var1=5 ;
   int var2=2 ;
   int resultado=0 ; 
    
    //suma
    resultado= var1 + var2 ;
    printf("%d+%d=\t %d\n",var1, var2, resultado);
  
    //resta
   resultado= var1 - var2 ;
   printf("%d-%d=\t %d\n", var1, var2, resultado);
   
   //multiplicacion
   resultado= var1 * var2 ;
   printf("%d*%d=\t %d\n", var1, var2, resultado);
   
   
   //division
   resultado= var1 / var2 ;
   printf("%d / %d=\t %d\n",var1, var2, resultado);
   
   //modulo
   resultado= var1 % var2 ;
   printf("%d mod %d= \t \n", var1, var2, resultado);
   
    
    
  
  system("PAUSE");	
  return 0;
}
