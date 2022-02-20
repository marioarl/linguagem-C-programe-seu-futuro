#include <stdio.h>
#include <stdlib.h>


/*
Dados duas matrizes A e B [3 X3], faca um programa para calcular a soma das matrizes e salvar em uma matriz C. Imprimir as 3 matrizes.
*/


int main(int argc, char const *argv[])
{
    int matA[3][3], matB[3][3], matC[3][3], l, c;
    srand(time(NULL));

    //Inserindo numeros na matriz A
    for(l=0; l < 3; l++){
        for(c = 0; c < 3; c++){
            matA[l][c] = rand() % 100;
        }
    }

    //Inserindo numeros na matriz B
    for(l=0; l < 3; l++){
        for(c = 0; c < 3; c++){
            matB[l][c] = rand() % 100;
        }
    }


    //Somando a matriz A e a matriz B, resultado na matriz C
    for(l=0; l < 3; l++){
        for(c = 0; c < 3; c++){
            matC[l][c] = matA[l][c] + matB[l][c];
        }
    }

    printf("\nMATRIZ A:\n");
    for(l=0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%2d ", matA[l][c]);
        }
        printf("\n");
    }

    printf("\nMATRIZ B:\n");
    for(l=0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%2d ", matB[l][c]);
        }
        printf("\n");
    }

    printf("\nMATRIZ C:\n");
    for(l=0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%2d ", matC[l][c]);
        }
        printf("\n");
    }



    return 0;
}