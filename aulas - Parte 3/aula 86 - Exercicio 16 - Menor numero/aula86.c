#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para encontrar o menor numero inteiro que seja divisivel por todos os numeros inteiros entre 1 e 10.

*/


int main(int argc, char const *argv[])
{
    int divisores, valor = 9;

    do
    {
        divisores = 0;
        valor++;
        for(int i = 1; i <= 10; i++){
            if(valor % i == 0)
            divisores++;
        }
    } while (divisores != 10);

    printf("\nValor: %d\n\n", valor);
    

    
    return 0;
}
