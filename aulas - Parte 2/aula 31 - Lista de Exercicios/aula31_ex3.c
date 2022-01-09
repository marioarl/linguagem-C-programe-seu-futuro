#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para trocar o valor de 2 variavies inteiras sem utilizar nenhuma variavel auxiliar

*/

int main(int argc, char const *argv[])
{
    int a, b;
    
    printf("\n\nDigite um valor para a variável a: ");
    scanf("%d", &a);

    printf("\nDigite um valor para a variável b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a- b;

    printf("\n\nValor de a: %d\tValor de b: %d", a, b);
    
    
    return 0;
}