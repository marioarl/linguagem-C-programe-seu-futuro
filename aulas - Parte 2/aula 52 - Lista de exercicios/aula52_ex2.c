#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia 5 numeros inteiros, um por vez. Conte quantos destes valores sao negativos e quantos sao positivos. AO final, imprima na tela a quantidade de numeros negativos e positivos.
*/

int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4, n5;
    int positivo = 0;
    int negativo = 0;
    printf("\nDigite o 1o. numero: ");
    scanf("%d", &n1);

    printf("\nDigite o 2o. numero: ");
    scanf("%d", &n2);

    printf("\nDigite o 3o. numero: ");
    scanf("%d", &n3);

    printf("\nDigite o 4o. numero: ");
    scanf("%d", &n4);

    printf("\nDigite o 5o. numero: ");
    scanf("%d", &n5);

    n1 >= 0 ? positivo++ : negativo++;
    n2 >= 0 ? positivo++ : negativo++;
    n3 >= 0 ? positivo++ : negativo++;
    n4 >= 0 ? positivo++ : negativo++;
    n5 >= 0 ? positivo++ : negativo++;

    printf("\n**************************************");
    printf("\nQuantidade de numeros POSITIVOS: %d", positivo);
    printf("\nQuantidade de numeros NEGATIVOS: %d", negativo);
    printf("\n**************************************\n");

    return 0;
}