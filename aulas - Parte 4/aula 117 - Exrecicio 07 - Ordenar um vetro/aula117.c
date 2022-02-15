#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para ordenar um vetor com 100 numeros inteiros.
Imprimir o vetor antes e apos a ordenacao

indice: 0   1   2   3   4
vetor:  7   5   8   2   1
*/


int main(int argc, char const *argv[])
{
    int i, contador = 0, troca = 0, copia, vetor[100];

    srand(time(NULL));

    for(i = 0; i < 100; i++){
        vetor[i] = rand() % 1000;
    }

    printf("Antes da ordenacao: \n");
    for(i = 0; i < 100; i++){
        printf("%3d", vetor[i]);
    }

    do{
        contador++;
        for(i = 0; i < 99; i++){
            if(vetor[i] > vetor[i+1]){
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i + 1] = copia;
                troca = 1;
            }          
        }
    }while(troca);

     printf("\nApos da ordenacao: Contador: %d\n", contador);
    for(i = 0; i < 100; i++){
        printf("%3d", vetor[i]);
    }





    return 0;
}
