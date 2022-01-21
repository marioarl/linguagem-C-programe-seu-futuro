#include <stdio.h>
#include <stdlib.h>


/*
Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
Dada a massa inicial, em gramas, faça um programa que determine o tempo necessario para que essa massa se torne menor que 0.05 gramas

*/


int main(int argc, char const *argv[])
{
    float massa; 
    int tempo = 0;

    printf("\nDigite a massa do mateiral em gramas: ");
    scanf("%f", &massa);

    while (massa >0.05)
    {
        massa = massa / 2;
        tempo += 50;

    }

    printf("\n\tTempo para que a massa fique menor que 0.05gm\n\t\t\t%d segundos", tempo);
    
    

    
    return 0;
}
