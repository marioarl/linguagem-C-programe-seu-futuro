#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para ler do teclado uma quantidade de segundos  imprimir na tela a conversao para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saida: 1:1:12
*/

int main(int argc, char const *argv[])
{
    int seg, h, m, s, resto;
    printf("\nDigite a quantidade de segundos: ");
    scanf("%d", &seg);
    
    h = seg / 3600;
    resto = seg % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("%dh:%dm:%ds", h, m, s);
    
    
    return 0;
}