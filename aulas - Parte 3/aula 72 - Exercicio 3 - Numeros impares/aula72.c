#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que some os numeros impares entre 1 e 100 e imprima a resposta 
*/


int main(int argc, char const *argv[])
{
    int soma = 0;
    printf("\n===Soma dos numeros impares de 1 ate 1000===\n\n");

    for(int i= 1; i <= 1000; i++){
        if (i %2 == 1){
            soma += i;
        }
            
    }
    printf("\n\nA Soma dos numeros impares de 1 ate 1000: %d", soma);
    return 0;
}
