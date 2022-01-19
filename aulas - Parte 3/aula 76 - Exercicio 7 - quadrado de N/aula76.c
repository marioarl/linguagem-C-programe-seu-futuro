#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares de 1 até N, inclusive N se for o caso 

*/

int main(int argc, char const *argv[])
{
    system("cls");
    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    printf("\n############################################");
    printf("\nQuadrado dos numeros pares de 1 ate %d", num);
    printf("\n############################################");
    for(int i = 2; i <= num; i+=2){
        printf("\nQuadrado de %d = %d\n", i, i * i);
    }
    printf("\n\n");

    return 0;
}
