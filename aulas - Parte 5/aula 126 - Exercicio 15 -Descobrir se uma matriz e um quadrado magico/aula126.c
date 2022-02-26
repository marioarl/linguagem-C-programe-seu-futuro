#include <stdio.h>
#include <stdlib.h>

/*
Dada uma matriz 4 x 4 faça um programa que diga se ela é um quadrado Magico ou nao

-> SOma de todas as linhas, colunas, diagonal principal e secundaria sao iguais.
Exemplo:
                  Soma das linhas  
16  3   2   13  = 34
5   10  11  8   = 34
9   6   7   12  = 34  
4   15  14  1   = 34

Soma das colunas    soma da diagonal principal  Soma da diagonal secundaria
34  34  34  34      16 + 10 + 7 + 1 = 34        13 + 11 + 6 + 4 = 34
*/

//Definindo uma variavel fora do main
#define tam 4

int main(int argc, char const *argv[])
{
    int mat[tam][tam] = {16,3,2,13,5,10,11,8,9,6,7,12,4,15,14,1};
    int total, soma, l, c, falhou = 0;

    //Percorrendo a diagonal principal
    soma = 0;
    for(l = 0; l < tam; l++){
        soma += mat[l][l];
    }
    printf("\nDiagonal Principal: %d\n", soma);

    total = soma;

    //Percorrendo a diagonal secundaria
    soma = 0;
    for(l = 0; l < tam; l++){
        soma += mat[l][tam - 1 - l];
    }
    printf("\nDiagonal secundaria: %d\n", soma);

    if (total != soma){
        printf("Diagonal secundaria diferente\n");
        falhou = 1;
    }

    //Percorrendo as linhas
    for( l= 0; l< tam; l++){
        soma = 0;
        for(c = 0; c < tam; c++){
            soma += mat[l][c];
    }
    printf("\nLinha %d: %d\n", l, soma);
    if(total != soma){
        printf("A linha %d e difrente\n",l );
        falhou = 1;
        }
    }

    //Percorrendo as colunas
    for( c= 0; c< tam; c++){
        soma = 0;
        for(l = 0; l < tam; l++){
            soma += mat[l][c];
    }
    printf("\nColuna %d: %d\n", c, soma);
    if(total != soma){
        printf("A Coluna %d e difrente\n",c );
        falhou = 1;
        }
    }

    if(falhou == 1){
        printf("\nNao e um quadrado magico!\n");
    }else
        printf("\nE um quadrado magico");

    return 0;
}
