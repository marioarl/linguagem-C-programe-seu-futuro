#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia um numero e informe se ele é divisivel por 2, por 3 ou por 5, ou se nao é divisivel or nenhum deles.
*/

int main(int argc, char const *argv[])
{
    int n;
    printf("\n**********************************************************");
    printf("\nVERIFICAR SE O NUMERO DIGITADO E DIVISIVEL POR 2, 3 OU 5");
    printf("\n**********************************************************");

    printf("\n\tDigite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("\nO numero %d e divisivel por 2, 3 ou 5", n);
    }else {
        printf("\nO numero %d NAO e divisivel po 2, 3, ou 5", n);
    }

    return 0;
}