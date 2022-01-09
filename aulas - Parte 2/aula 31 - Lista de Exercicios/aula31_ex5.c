#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o numero de dias trabalhados pelo encanador e iprimima a quantia liquida que deverá ser paga, sabendo que sao descontados 8% para imposto de renda.
*/

int main(int argc, char const *argv[])
{
    int dias;
    float valor, vLiquido, imposto;
    printf("\n===========================================");
    printf("\n============EMPRESAS MARIO BROS============");
    printf("\n===========================================");

    printf("\n\nNumero de dias trabalhados: ");
    scanf("%d", &dias);
    
    valor = dias * 45;
    imposto = valor * 8 / 100;

    vLiquido = valor - imposto;

    printf("\nPreco por dia trabalhado:  \tR$  45.00");
    printf("\nValor BRUTO: \t\t\tR$ %.2f", valor);
    printf("\nDesconto de 8 porcento: \tR$  %.2f", imposto);
    printf("\n\n*****************************************");
    printf("\n\tValor Liquido: R$ %.2f", vLiquido);
    printf("\n*****************************************");
    
    
    return 0;
}