/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *arr;
    arr = (char *) malloc(200*sizeof(char));
    printf("Inserisci stringa\n");
    scanf("%s", arr);
    int spazio_Arr = strlen(arr);
    printf("Lunghezza stringa: %d" ,spazio_Arr);
    free(arr);
    
    return 0;
}
