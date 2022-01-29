#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que gere a saida abaixo (10 linhas, 20 * por linha).
Restricoes:
-> A instrucao "printf" pode ser utilizada no maximo 2 vezes;
-> o \n para saltar linha pode ser utilizado no maximo 1 vez.


********************
********************
********************
********************
********************
********************
********************
********************
********************
********************

*/

int main(int argc, char const *argv[])
{

    for (int i = 0; i < 10; i++){
        for(int index = 0; index < 19; index++){
            printf("*");
        }
        printf("\n");
    }
        
    

    return 0;
}