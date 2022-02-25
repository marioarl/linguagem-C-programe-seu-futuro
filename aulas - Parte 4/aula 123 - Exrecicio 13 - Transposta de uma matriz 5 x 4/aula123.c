#include <stdio.h>
#include <stdlib.h>


/*

Faça um programa para calcular a transposta de uma matriz 5 x 4, imprima as duas matrizes na tela

Matriz tranposta tranforma os valores da matriz principal de 5 linhas para 5 colunas e de 4 colunas para 4 linhas

MATRIZ (5 X 4)                  MATRIZ TRANSPOSTA(4 X 5)
colunas     0   1   2   3       colunas     0   1   2   3   4 
linhas  0   45  78  41  52      linhas  0   45  51  17  34  24      
        1   51  59  24  26              1   78  59  24  39  67    
        2   17  24  19  26              2   41  24  19  83  69       
        3   34  39  83  63              3   52  26  26  63  59    
        4   24  67  69  59
*/

int main(int argc, char const *argv[])
{
    int tamL = 5, tamC = 4;
    int l, c,mat[tamL][tamC], trans[tamC][tamL];

    srand(time(NULL));

    //Preenche a matriz com numeros aleatorios
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            mat[l][c] = rand() % 500;
        }
    }

    //Imprimir a matriz oriignal
    printf("\nMatriz Original:\n");
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            printf("%3d ",mat[l][c]);
        }
        printf("\n");
    }

    //Preencher a matrix transposta
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            trans[c][l] = mat[l][c];
        }
    }

    //Imprimir a matriz transposta
    printf("\nMatriz Transposta:\n");
    for(l = 0; l < tamC; l++){
        for(c = 0; c < tamL; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }




    return 0;
}
