#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta(em porcentagem) e o numero de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividiva igualmente.
*/

int main(int argc, char const *argv[])
{
    float total, totalD;
    int gorjeta, nPessoas;

    printf("\n============================================\n");
    printf("=============RESTAURANTE TABAJARA===========\n");
    printf("============================================\n");

    printf("Digite o valor da conta: R$ "); //Valor da conta do restaurante
    scanf("%f", &total);

    printf("\nDigite a porcentagem da gorjeta: "); //Valor da gorjeta em porcentagem
    scanf("%d", &gorjeta);

    printf("\nNumero de pessoas: "); //Numero de pessoas que vao dividir a conta
    scanf("%d", &nPessoas);

    totalD = (total + (total * gorjeta / 100)) / nPessoas;



    printf("\n***********************************");
    printf("\n*Cada pessoa deve pagar R$ %.2f *\n",totalD);
    printf("***********************************");
    
    
    return 0;
}