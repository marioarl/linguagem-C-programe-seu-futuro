#include <stdio.h>
#include <stdlib.h>


/*
while (condicao) {
    bloco
}

*/ 

int main(int argc, char const *argv[])
{
    int valor;

    printf("\nDigite um valor maior que zero: ");
    scanf("%d", &valor);

    while(valor <= 0){
        printf("\nVALOR INVALIDO! Digite um numero maior que zero: ");
        scanf("%d", &valor);
    }

    printf("\nValor lido: %d\n\n", valor);


    return 0;
}
