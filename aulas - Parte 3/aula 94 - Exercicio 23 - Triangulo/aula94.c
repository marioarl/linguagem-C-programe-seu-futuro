#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que gere a saida abaixo
Restricoes:
1)A instrucao "printf" pode ser utilizada no maixo 2 vezes;
2)O \n para saltar linha pode ser utilizado no maixmo 2 vezes 

*
**
***
****
*****
******
*******
********

*/

int main(int argc, char const *argv[])
{
    

    for (int i = 0; i < 9; i++){
        for(int index = 0; index < i; index++){
            printf("*");
        }
        printf("\n");
    }

    
    
    return 0;
}