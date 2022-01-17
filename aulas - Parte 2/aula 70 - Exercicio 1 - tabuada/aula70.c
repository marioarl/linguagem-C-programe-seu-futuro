#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa para ler do teclado um valor inteiro entre 1 e 10 e apresente a tabuada.

Entrada: 7
Saida:
7  *  1  = 7
7  *  2  = 14
7  *  3  = 21
7  *  4  = 28
7  *  5  = 35
7  *  6  = 42
7  *  7  = 49
7  *  8  = 56
7  *  9  = 63
7  *  10 = 70
*/

int main(int argc, char const *argv[])
{
    int i, n;
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n-=-=-=-=-=-= TABUADA -=-=-=-=-=-");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

    do{
        printf("\n\nDigite um numero de 1 e 10: ");
        scanf("%d", &n);
    }while(n < 1 || n >10);
    
    for(i = 1; i <=10; i++)
        printf("%d  X  %d  = %d\n", n, i, n * i );

    return 0;
}
