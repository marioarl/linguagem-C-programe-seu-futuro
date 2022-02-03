#include <stdio.h>
#include <stdlib.h>




int main(int argc, char const *argv[])
{
    //Criando uma matriz
    int mat[3][3];
    /*
    Tambem é possivel já incluir os valores na matriz nas linhas e coluna
                C0  C1  C2
    linha 0     1   2   3
    linha 1     4   5   6
    linha 2     7   8   9
    */
   int mat1[3][3] = {1,2,3,4,5,6,7,8,9}; 
    
    /*
    Tambem pode-se criar uma matriz sem informar a quantidade de linhas e informado a quantidade de colunas
    
                C0  C1  C2
    linha 0     1   2   3
    linha 1     4   5   6
    */
   int mat2[][3] = {1,2,3,4,5,6};

   /*
    Se colocarmos mais 1 elemento faltara valores para colocar nas outras colunas, a linguagem C preenche essas colunas com (0)zero

                C0  C1  C2
    linha 0     1   2   3
    linha 1     4   5   6
    linha 3     7   0   0
    */
   int mat3[][3] = {1,2,3,4,5,6,7};

    //Preenchendo uma matriz de 3X3 com o numero 0(zero)
   int mat4[3][3] = {0};


    //Matriz com numeros Reais
   float mat5[4][5];

   //Matriz com caracteres
   char mat6[10][10];
   






    return 0;
}
