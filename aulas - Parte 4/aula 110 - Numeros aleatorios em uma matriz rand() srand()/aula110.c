#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    
    srand(time(NULL));
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; i++){
            mat1[i][j] = rand(); 
        }
    }


    for(i = 0; i <3; i++){
        for (j = 0; j < 3; j++);
            printf("%5d ", mat1[i][j]);// %2d formata a saida da matriz em 2 casas 
        printf("\n\n");
    }


  

    



    return 0;
}