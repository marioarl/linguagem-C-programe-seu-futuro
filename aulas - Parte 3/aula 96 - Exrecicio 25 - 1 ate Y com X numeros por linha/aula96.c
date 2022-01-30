#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia dois valores X e Y. A seguir. mostre uma sequencia de 1 ate Y, passando para a proxima linha a cada X numeros.

Exemplo de saida:

1 2 3 
4 5 6 
7 8 9 
10 11 12
...
97 98 99
 
*/


int main(int argc, char const *argv[])
{
    int x, y, i;

    printf("Digite o valor de 1 ate Y: ", y);
    scanf("%d", &y);
    printf("Digite a quantidade de X linhas: ", x);
    scanf("%d", &x);

    for(i = 1; i<=y; i++){
        printf("%3d ", i);
        if(i % x == 0){
            printf("\n");
        }

    }
        
    
    return 0;
}
