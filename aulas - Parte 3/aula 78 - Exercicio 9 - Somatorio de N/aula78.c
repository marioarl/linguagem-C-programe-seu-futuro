#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que calcule o valor de A, dado por:
A = 1+ 2 + 3 + 4 + ....+ N, onde N é um numero inteiro, maior que zero informado pelo usuario

*/

int main(int argc, char const *argv[])
{
    int num;
    int a = 0;

    do
    {
        printf("\nInforme um numero: ");
        scanf("%d", &num);
    } while (num < 1);
    
    

    for(int i = 1; i <= num; i++){
        a += i;
    }
    
    printf("\nSoma de 1 ate  %d  = %d", num, a);

    

    
    return 0;
}
