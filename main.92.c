#include <stdio.h>
#include <stdlib.h>
/*Programa que pida un n�mero y muestre en pantalla el mismo n�mero de asteriscos*/
int main(void)
{
            int num, x;
           
            printf("INTRODUZCA UN NUMERO ENTERO\n");
    scanf("%d",&num);
           
            for (x=1;x<=num;x++)
            {
        printf("*");
    }
            printf("\n");
           
    system("PAUSE");     
    return 0;
}
