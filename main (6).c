/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *stringa = NULL;
    int dim = 10;
    stringa = (char *)malloc(dim * sizeof(char));
    printf("Inserire la stringa\n");
    fgets(stringa, dim, stdin);
    char primo, secondo;
    printf("Inserire il primo carattere\n");
    scanf("%s", &primo);
    printf("Inserire il secondo carattere\n");
    scanf("%s", &secondo);
    for(int i = 0; i < dim; i++)
    {
        if(stringa[i] == primo)
        {
            stringa[i] = secondo;
        }
    }
    printf("%s\n", stringa);
    free(stringa);
}
