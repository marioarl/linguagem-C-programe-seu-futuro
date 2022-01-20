#include <stdio.h>
#include <stdlib.h>

/*
Voce decidiu ficar rico guardando dinheiro por 30 dias consecutivos.
Para tal, decidiu guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto dia e assim por diante.
Faça um programa que calcule quanto voce terá ao final de 30 dias.

*/

int main(int argc, char const *argv[])
{
    float m = 0.01, s = 0;
    int i;
    for(i = 1; i<=30; i++){
        if (i == 1){
            m = 0.01;
        }else
            m = m * 2;
        printf("\nDia %d = Moedas %.2f", i, m);
        s += m;
    }

    printf("\nAo final de 30 dias voce tera R$ %.2f", s);
    return 0;
}
