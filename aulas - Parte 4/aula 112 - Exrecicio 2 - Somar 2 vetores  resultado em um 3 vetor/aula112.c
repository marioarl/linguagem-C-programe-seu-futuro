#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que some o conteudo de dois vetores de tamanho 25 e armazene o resultado em um terceiro vetor. Imprima os tres vetores na tela.

Os 2 primeiros vetores deverao ter numeros aleatorios

*/

int main(int argc, char const *argv[])
{
    int vt1[25];
    int vt2[25];
    int vt3[25];
    int i = 0;

    srand(time(NULL));

    //Inclusao de numeros aleatorios no VETOR1 e VETOR2
    for (i = 0; i <25; i++){
        vt1[i] = rand() % 100; // %100 para que os numeros sejam escolhidos de 0 a 99 
        vt2[i] = rand() % 100;
        vt3[i] = vt1[i] + vt2[i];
    }
    printf("\nVETOR 1: ");
    for (i = 0; i <25; i++){
        printf("%5d ", vt1[i]);
    }

    printf("\nVETOR 2: ");
    for (i = 0; i <25; i++){
        printf("%5d ", vt2[i]);
    }

    printf("\nVETOR 3: ");
    for (i = 0; i <25; i++){
        printf("%5d ", vt3[i]);
    }
    
    
    return 0;
}
