#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para ler um numero inteiro e verificar se correspomde a uma mes valido no calendario. Caso corresponda, escrever o nome do mes, caso contrario, escrever a mensagem 'Mes invalido'
*/

int main(int argc, char const *argv[])
{
    int mes;
    printf("\nDigite um numero: ");
    scanf("%d", &mes);

    switch(mes){
        case 1:
        printf("\nMES: Janeiro");
        break;

        case 2:
        printf("\nMES: Fevereiro");
        break;

        case 3:
        printf("\nMES: Marco");
        break;

        case 4:
        printf("\nMES: Abril");
        break;

        case 5:
        printf("\nMES: Maio");
        break;

        case 6:
        printf("\nMES: Junho");
        break;

        case 7:
        printf("\nMES: Julho");
        break;

        case 8:
        printf("\nMES: Agosto");
        break;

        case 9:
        printf("\nMES: Setembro");
        break;

        case 10:
        printf("\nMES: Outubro");
        break;

        case 11:
        printf("\nMES: Novembro");
        break;

        case 12:
        printf("\nMES: Dezembro");
        break;

        default:
        printf("\nMes Invalido!");

    }


    return 0;
}
