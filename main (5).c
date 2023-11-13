/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dimensione;
    printf("Inserisci il valore dell'array\n");
    scanf("%d", &dimensione);
    int array[dimensione];
    for(int i = 0; i < dimensione; i++)
    {
        printf("Inserisci valore\n");
        scanf("%d", &array[i]);
    }
    int temp = 0;
    for(int j=0; j < (dimensione - 1); j++)
    {
        for(int i=0; i < (dimensione -j- 1); i++)
        {
           if(array[i] > array[i+1])
           {
               temp = array[i];
               array[i] = array[i+1];
               array[i+1] = temp;
           }
        }
    }
    printf("Array ordinato:\n");
    for(int i = 0; i < dimensione; i++) {
        printf("%d ", array[i]);
    }
}
