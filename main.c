/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() 
{
    srand(time(NULL));
    int numero = (rand()%10)+1;
    int *numeroPunt = &numero;
    bool vinto = false;
    printf("Indovina il numero\n");
    while(!vinto)
    {
        int indovina;
       scanf("%d", &indovina);
       int *puntA = &indovina;
       if(*puntA == *numeroPunt)
       {
           vinto = true;
       }
       else
       {
           printf("Riprova\n");
       }
    }
    printf("Hai vinto!\n");
    return 0;
}

