#include <stdio.h>
#include <stdlib.h>

/*
        Operadores matematicos:
        Soma            +
        Subtracao       -
        Multiplicacao   *
        Divisao         /
*/

int main(int argc, char const *argv[])
{
    printf("\nSoma: %d\n", 10 + 20);
    printf("\nSubtracao %d\n", 10 - 20);
    printf("\nMultiplicacao %d\n", 10 * 20);
    printf("\nDivisao %d\n", 10 / 20); //Em linguagem C quando dividimos um numero inteiro por outro numero inteiro, o resultado será inteiro (resposta correta 0.5)
    printf("\nDivisao 2 %f\n", 10.0 / 20);// Para que o numero seja dividido, deveremos colocar um dos numeros como numero REAL.
    return 0;
}

