#include <stdio.h>
#include <stdlib.h>

/*
Chico tem 1,50 metro e cresce 2 centimetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centimetros por ano. Construa um programa que calcule e imprima quantos anos serao necessarios para que Zé seja maior que Chico.

*/

int main(int argc, char const *argv[])
{
    float chico = 1.50, ze = 1.10;
    int anos = 0;

    do
    {
        chico += 0.02;
        ze += 0.03;
        anos++;
    } while (ze <= chico);
    

    printf("\nSerao necessario %d anos para que Ze seja maior que Chico", anos);
    
    return 0;
}
