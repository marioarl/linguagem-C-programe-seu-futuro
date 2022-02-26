#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
Faca um programa que imprima na tela a diagonal principal de uma matriz 5 x 5

colunas     0   1   2   3   4
linhas  0   45  78  41  52  35
        1   51  59  24  26  27
        2   17  24  19  26  81
        3   34  39  83  63  55
        4   24  67  69  59  48
*/


int main(int argc, char const *argv[])
{
    int tam = 5, l, c;
    int mat[tam][tam];

    srand(time(NULL));

    for (l = 0; l < tam; l++){
        for (c =0; c < tam; c++){
            mat[l][c] = rand() % 100;
        }
    }

    for (l = 0; l < tam; l++){
        for (c =0; c < tam; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\nSomente a diagonal da Matriz");
    for (l = 0; l < tam; l++){
        for (c =0; c < tam; c++){
            if( l == c)
                printf("%d ", mat[l][c]);
            else
                printf(" ");
        }
        printf("\n");
    }
    
    
    return 0;
}