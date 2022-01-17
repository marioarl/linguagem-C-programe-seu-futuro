#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor, valor2;

    //Programa com WHILE
    printf("======WHILE=====");
    printf("\nDigite um valor maior que zero: ");
    scanf("%d", &valor);

    while(valor <= 0){
        printf("\nVALOR INVALIDO! Digite um numero maior que zero: ");
        scanf("%d", &valor);
    }
    printf("\nValor lido: %d\n\n", valor);

    
    //Programa com DO WHILE
    printf("======DO WHILE=====");
    do {
       printf("\n\n\nDigite um valor maior que zero: ");
        scanf("%d", &valor2);
    }while (valor2 <=0);

    printf("\nValor lido: %d\n\n", valor2);
    return 0;
}
