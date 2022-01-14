#include <stdio.h>
#include <stdlib.h>


/*
Elabore um programa que, dado o numero do mes, indica quantos dias tem esse mes. Utilize para isso a estrutura de selecao SWITCH.
OBS: Considere fevereiro contendo 28 dias*/

int main(int argc, char const *argv[])
{
    int mes;
    printf("\n\nDigite o numero do mes: ");
    scanf("%d", &mes);

    switch(mes){
        case 1:
        printf("\n\nO mes de JANEIRO tem 31 dias!");
        break;
        case 2:
        printf("\n\nO mes de FEVEREIRO tem 28 dias!");
        break;
        case 3: 
        printf("\n\nO mes de MARCO tem 31 dias!");
        break;
        case 4:
        printf("\n\nO mes de ABRIL tem 30 dias!");
        break;
        case 5:
        printf("\n\nO mes de MAIO tem 31 dias!");
        break;
        case 6:
        printf("\n\nO mes de JUNHO tem 30 dias!");
        break;
        case 7:
        printf("\n\nO mes de JULHO tem 31 dias!");
        break;
        case 8:
        printf("\n\nO mes de AGOSTO tem 31 dias!");
        break;
        case 9:
        printf("\n\nO mes de SETEMEBRO tem 30 dias!");
        break;
        case 10:
        printf("\n\nO mes de OUTUBRO tem 31 dias!");
        break;
        case 11:
        printf("\n\nO mes de NOVEMBRO tem 30 dias!");
        break;
        case 12:
        printf("\n\nO mes de DEZEMBRO tem 31 dias!");
        break;
        default:
        printf("\n\nMES INVALIDO!!!");

    }
    
    return 0;
}
