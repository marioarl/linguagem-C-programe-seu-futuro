#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuario. EM seguida, calcule e salve em um segundo vetor o quadrado de cada elemento do primeiro vetor. Por fim, imprima os dois vetores

*/

int main(int argc, char const *argv[])
{

    
    int i = 0;
    int num[10];
    int num2[10];

    for (i = 0; i <10; i++){
        printf("Digite um numero na posicao %d: ", i);
        scanf("%d", &num[i]);
        num2[i] = num[i] * num[i];
    }
    printf("\nVETOR 1: ");
    for (i = 0; i <10; i++){
        printf("%2d ",num[i]);
    }
    printf("\nVETOR 2: ");
    for (i = 0; i <10; i++){
        printf("%2d ", num2[i]);

    }
    return 0;
}