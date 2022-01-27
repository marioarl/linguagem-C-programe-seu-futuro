#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peca numeros ao usuario. QUando o usuario digitar o numero 0 (zero) o programa deve imprimir na tela quantos numeros positivos e negativos foram digitados.

*/


int main(int argc, char const *argv[])
{
    int num, neg = 0, pos = 0;

    printf("\n###################################");
    printf("\n## NUMEROS POSITIVOS E NEGATIVOS ##");
    printf("\n###################################");


    do
    {
        printf("\n\nDigite um numero ou 0 para sair: ");
        scanf("%d", &num);

        if (num > 0){
            pos++;
        }else if (num < 0){
            neg++;
        }

    } while (num != 0);
    

    printf("\n\tNumeros POSITIVOS digitados: %d", pos);
    printf("\n\tNumeros NEGATIVOS digitados: %d", neg);


    return 0;
}

