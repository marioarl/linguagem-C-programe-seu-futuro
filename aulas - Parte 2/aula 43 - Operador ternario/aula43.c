#include <stdio.h>
#include <stdlib.h>

//OPERADOR TERNARIO ==> (expressao) ? verdadeiro : falso


int main(int argc, char const *argv[])
{
    int a = 10;
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    a < 0 ? printf("\n\tValor negativo\n") : printf("\n\tValor positivo ou igual a zero\n"); //Operador ternario
    return 0;
}
