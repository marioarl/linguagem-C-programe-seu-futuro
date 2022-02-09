#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um vetor N de tamanho 20 e o imprima na tela. Em seguida, troque o 1o. elemento com o ultimo, o 2o. com o penultimo.... até o 10o. com o 11o.. Imprima o vetor N modificado

indice: 0    1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19
vetor : 14  52  36  54  78  84  91  16  18  24  57  55  32  39  76  81  46  43  48  29
vetor:  29  48  43  46  81  76  39  32  55  57  24  18  16  91  84  78  54  36  52  14 
*/


int main(int argc, char const *argv[])
{
    int vt1[20];

    for (int i = 0; i <20; i++){
        printf("Digite um valor na posicao %d: ", i);
        scanf("%d", &vt1[i]);
    }

    printf("\nVetor: ");
    for(int i = 0; i<20; i++){
        printf("%d ", vt1[i]);
    }


    printf("\nVetor: ");
    for(int i = 19; i>=0; i--){
        printf("%d ", vt1[i]);
    }
    

    return 0;
}
