#include <stdio.h>
#include <stdlib.h>

/*
    Crie um programa que permita ao usuario escolher entre fazer a conversao de Real para Dolar ou de Dolar para Real. Utilize como taxa de cambio U$ 1.00 = R$ 5.30
*/

int main(int argc, char const *argv[])
{   
    int opcao;
    float valor, conv;
    printf("\n\n========================================");
    printf("\n           CONVERSAO DE MOEDA");
    printf("\n========================================\n");
    printf("\nTAXA CAMBIA US$1 = R$ 5.30");

    printf("\nSelecione o tipo de conversao que deseja");
    printf("\n\t[ 1 ] Dolar para Real\n\t[ 2 ] Real para Dolar ");
    printf("\n\t\t==>");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\nQual valor a ser convertido? ");
            scanf("%f", &valor);
            conv = valor * 5.30;
            printf("\nO valor de US$ %.2f convertido sera R$: %.2f\n", valor, conv);
            break;
        case 2:
            printf("\nQual valor a ser convertido? ");
            scanf("%f", &valor);
            conv = valor / 5.30;
            printf("\nO valor de R$ %.2f convertido sera US$: %.2f\n", valor, conv);
            break;
        default:
        printf("\n******** OPCAO INVALIDA *********");
    }

    printf("\n\nFIM DO PROGRAMA");

    



    return 0;
}