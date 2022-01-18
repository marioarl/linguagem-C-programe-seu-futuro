#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que some os numeros impares entre 1 e 100 e imprima a resposta 
Restriçao ==> O bloco de repeticao deve executar no maximo 500 vezes
*/


int main(int argc, char const *argv[])
{
    int soma = 0;

    for(int i= 1; i <= 1000; i+=2)
        soma += i;
            
    printf("\n\nA Soma dos numeros impares de 1 ate 1000: %d", soma);
   
    return 0;
}