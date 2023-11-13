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
    int memoria = 5000000000;
    int *array;
    while(true)
    {
        array = (int *) malloc(sizeof(int) * memoria);
        if(array != NULL)
        {
            int spazio = memoria * sizeof(int);
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
