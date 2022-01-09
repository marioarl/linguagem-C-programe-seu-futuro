#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que permita fazer a conversao cambial entre Reais e Dolares. Considere como taxa de cambio US$ 1,0 = R$ 5,30.
Leia um valor em Reais e mostre o valor correspondente em Dolares:
*/

int main(int argc, char const *argv[])
{
    float quantidade;

    printf("\n===================================================");
    printf("\n===========CONVERSOR DE REAL PARA DOLAR============");
    printf("\n===================================================");
    printf("\n*************TAXA DO DIA US$ 1,0 = R$ 5,30*************");

    printf("\n\nDigite a quantidade em REAIS: R$ ");
    scanf("%f", &quantidade);

    printf("\n**************************************************");
    printf("\n| Valor de R$ %.2f em dolar e: U$ %.2f", quantidade, quantidade / 5.30);
    printf("\n**************************************************\n\n");

    
    
    return 0;
}