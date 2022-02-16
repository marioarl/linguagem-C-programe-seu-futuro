#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que preencha uma matriz 5 x 10 com numeros inteiros.
Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.

*/


int main(int argc, char const *argv[])
{
    int l, c, soma = 0, somaL[5], somaC[10], mat[5][10];

    srand(time(NULL));

    for(l = 0; l < 5; l++){
        for (c = 0; c < 10; c++){
            mat[l][c] = rand() % 100;
        }
    }

    //Letra a - somando as linha
    for(l = 0; l < 5; l++){
        soma =0;
        for(c = 0; c < 10; c++){
            soma += mat[l][c];
        }
        somaL[l] = soma;
    }

    //Letra b - somando as colunas
    for(c = 0; c < 10; c++){
        soma = 0;
        for(l = 0; l < 5; l++){
            soma += mat[l][c];
        }
        somaC[c] = soma;
    }

    //Impressao das estruturas
    printf("\nMatriz: \n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 10; c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\nVetor com a soma das linhas:\n");
    for(l = 0; l < 5; l++){
        printf("Linha %d: %d\n", l+1, somaL[l]);
    }

    printf("\nVetor com a soma das colunas:\n");
    for(c = 0; c < 10; c++){
        printf("Linha %d: %d\n", c+1, somaC[c]);
    }
    
    return 0;
}
