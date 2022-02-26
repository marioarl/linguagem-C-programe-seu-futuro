#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma matriz 4 x 4

colunas     0   1   2   3
linhas  0   45  78  41  52
        1   51  59  24  26
        2   17  24  19  26
        3   34  39  83  63

Para imprimir somente os valores que estão abaixo da diagonal principal : O indice da linha precisa ser maior que o indice da coluna

*/

int main(int argc, char const *argv[])
{
    int tam = 4;
    int l, c , mat[tam][tam];

    srand(time(NULL));

    for(l = 0; l < tam; l++){
        for(c =0; c < tam; c++){
            mat[l][c] = rand() % 100;
        }
    }

    printf("\n\nMatriz completa:\n");
    for(l = 0; l < tam; l++){
        for(c =0; c < tam; c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\nAbaixo da diagonal principal:\n");
    for(l = 0; l < tam; l++){
        for(c =0; c < tam; c++){
            if (l > c){
                printf("%2d ", mat[l][c]);
            }else
                printf("   ");
        }
        printf("\n");
    }

    printf("\n\n");
    

    return 0;
}
