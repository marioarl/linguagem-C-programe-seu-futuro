#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9}, mat2[3][3] = {7,5,8,10,23,55,32,78,12}, mat3[3][3];
    char mat5[3][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l' };
   
    // Preenchendo a mat1 com os dados já inclusos mas multiplicado por 2
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; i++){
            mat1[i][j] = mat1[i][j] * 2; 
        }
    }


    for(i = 0; i <3; i++){
        for (j = 0; j < 3; j++);
            printf("%2d ", mat1[i][j]);// %2d formata a saida da matriz em 2 casas 
        printf("\n\n");
    }


    printf("******************");

    // Preenchendo a mat3 com a soma de mat1 com mat2
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; i++){
            mat3[i][j] = mat1[i][j] + mat2[i][j]; 
        }
    }


    for(i = 0; i <3; i++){
        for (j = 0; j < 3; j++);
            printf("%2d ", mat3[i][j]);
        printf("\n");
    }




    return 0;
}