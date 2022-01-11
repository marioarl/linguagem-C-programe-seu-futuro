#include <stdio.h>
#include <stdlib.h>

//OPERADOR TERNARIO Aninhado


int main(int argc, char const *argv[])
{
    int a = 10;
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    a < 0 ? printf("\n\tValor negativo\n") : 
        a > 0 ? printf("\n\tValor positivo\n") : printf("\n\tValor igual a zero\n");  //Operador ternario aninhado
    return 0;
}
