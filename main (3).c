/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>

int main()
{
    long int memoria;
    printf("Quanto lungo\n");
    scanf("%d", &memoria);
    long int *array;
    while(true)
    {
        array = (long int *) malloc(sizeof(long int) * memoria);
        if(array != NULL)
        {
            long int spazio = memoria * sizeof(long int);
            printf("Spazio allocato: %d\n", spazio);
            memoria = memoria + 50000;
            free(array);
        }
        else
        {
            printf("Errore di memoria");
            break;
        }
    }
}
