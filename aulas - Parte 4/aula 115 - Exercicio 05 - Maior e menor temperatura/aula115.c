#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba a temperatura media de cada mes do ano, armazenar em um vetor. Ao final a maior e a menor te,peratura do ano e em que mes ocorreram(mostrar o mes por extenso: janeiro, fevereiro....). descosidere empates.
*/



int main(int argc, char const *argv[])
{
    int i, indiceMaior, indiceMenor;
    float menor = 99, maior = 0, temp[12];

    for(i =0; i <12; i++){
        printf("Digite a temperatura do mes %d: ", i + 1);
        scanf("%f", temp[i]);
    }

    for (i = 0; i < 12; i++){
        if(menor > temp[i])
            menor = temp[i];
            indiceMenor = i;
        
        if(maior < temp[i]){
            maior = temp[i];
            indiceMaior = i;
        }
    }

    printf("A menor temperatura foi %.1f e ocorreu no mes ", menor);
    switch(indiceMenor){
        case 0:
        printf("Janeiro\n");
        break;
        case 1:
        printf("Fevereiro\n");
        break;
        case 2:
        printf("Marco\n");
        break;
        case 3:
        printf("Abril\n");
        break;
        case 4:
        printf("Maio\n");
        break;
        case 5:
        printf("Junho\n");
        break;
        case 6:
        printf("Julho\n");
        break;
        case 7:
        printf("Agosto\n");
        break;
        case 8:
        printf("Setembro\n");
        break;
        case 9:
        printf("Outubro\n");
        break;
        case 10:
        printf("Novembro\n");
        break;
        case 11:
        printf("Dezembro\n");
        break;
    }


    printf("A maior temperatura foi %.1f e ocorreu no mes ", maior);
    switch(indiceMaior){
        case 0:
        printf("Janeiro\n");
        break;
        case 1:
        printf("Fevereiro\n");
        break;
        case 2:
        printf("Marco\n");
        break;
        case 3:
        printf("Abril\n");
        break;
        case 4:
        printf("Maio\n");
        break;
        case 5:
        printf("Junho\n");
        break;
        case 6:
        printf("Julho\n");
        break;
        case 7:
        printf("Agosto\n");
        break;
        case 8:
        printf("Setembro\n");
        break;
        case 9:
        printf("Outubro\n");
        break;
        case 10:
        printf("Novembro\n");
        break;
        case 11:
        printf("Dezembro\n");
        break;
    }






    return 0;
}
