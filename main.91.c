#include <stdio.h>
#include <stdlib.h>
/*Programa que pida un número del 1 al 7 y diga el día de la semana correspondiente */
int main()
{
    
    int casos;
    printf("INGRESA UN NUMERO DEL 1 AL 7 \n ");
    scanf("%d",&casos); 
    switch(casos)
    {
                 case 1:
                      printf("EL DIA DE LA SEMANA ES LUNES\n");
                      break; 
                      case 2:
                      printf("EL DIA DE LA SEMANA ES MARTES\n");
                      break; 
                      case 3:
                      printf("EL DIA DE LA SEMANA ES MIERCOLES\n");
                      break; 
                      case 4:
                      printf("EL DIA DE LA SEMANA ES JUEVES\n");
                      break; 
                      case 5:
                      printf("EL DIA DE LA SEMANA ES VIERNES\n");
                      break; 
                      case 6:
                      printf("EL DIA DE LA SEMANA ES SABADO\n");
                      break;
                       case 7:
                      printf("EL DIA DE LA SEMANA ES DOMINGO\n");
                      break; 
                      default:
                              printf("No corresponde a ningun dia de la semana");
                              }
    
  system("PAUSE");	
  return 0;
}
