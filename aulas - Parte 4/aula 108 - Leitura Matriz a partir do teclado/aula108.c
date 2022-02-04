#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    char mat5[3][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l' };
   
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; i++){
            printf("\nDigite um valor na linha %d coluna %d", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }


    for(i = 0; i <3; i++){
        for (j = 0; j < 3; j++);
            printf("%d ", mat1[i][j]);
        printf("\n");
    }


    return 0;
}
