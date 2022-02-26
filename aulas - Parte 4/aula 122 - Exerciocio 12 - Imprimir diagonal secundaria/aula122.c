#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que imprima na tela a diagonal secundaria de uma matriz 7 x 7

colunas     0   1   2   3   4   5   6
linhas  0   45  78  41  52  35  34  78
        1   51  59  24  26  27  98  12
        2   17  24  19  26  81  34  19
        3   34  39  83  63  55  56  77
        4   24  67  69  59  48  22  10
        5   98  87  65  34  32  12  99
        6   77  56  69  49  55  32  31
*/



int main(int argc, char const *argv[])
{
    int tam = 7;
    int l, c, mat[tam][tam];

    srand(time(NULL));

    //Preenche a matriz com numeros aleatorios
    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            mat[l][c] = rand() % 100;
        }
    }

    //Imprimir a matriz na tela
    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    //Imprimir a diagonal principal
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][l]);
    }

    //Imprimir a diagonal secundaria
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][tam - 1 - l]);
    }
    printf("\n\n");




    
    return 0;
}
