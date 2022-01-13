#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia 3 valores e apresente qual é o maior e qual é o menor
*/

int main(int argc, char const *argv[])
{
    //MINHA RESPOSTA
    int n1, n2, n3, maior, menor;
   

    printf("\nDigite o 1o. Valor: ");
    scanf("%d", &n1);

    printf("Digite o 2o. Valor: ");
    scanf("%d", &n2);

    printf("Digite o 3o. Valor: ");
    scanf("%d", &n3);
    
    if((n1 > n2) && (n1 > n3)){
        maior = n1;
    }else if ((n2 > n1) && (n2 > n3)){
        maior = n2;
    }else{
        maior = n3;
    }

    if((n1 < n2) && (n1 < n3)){
        menor = n1;
    }else if ((n2 < n1) && (n2 < n3)){
        menor = n2;
    }else{
        menor = n3;
    }
    
    printf("\n\t**************************");
    printf("\n\tO MAIOR numero e: %d", maior);
    printf("\n\tO menor numero e: %d", menor);
    printf("\n\t**************************");

    //RESPOSTA DO PROFESSOR WAGNER
    int a, b, c, menor1, maior1;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    //Primeira solucao
    if(a < b){
        if (a < c)
            menor1 = a;
        else
            menor1 = c;
    }
    else {
        if(b < c)
            menor1 = b;
        else    
            menor1 = c;
    }

    if (a > b){
        if (a >c)
            maior1 = a;
        else    
            maior1 = c;
    }
    else {
        if(b > c)
            maior1 = b;
        else    
            maior1 = c;
    }
    printf("\nPrimeira versao\tMenor: %d\tMaior: %d\n", menor1, maior1);

    //Segunda Versao
    menor1 = a;
    maior1 = b;

    if(menor1 > b);
        menor1 = b;
    if(menor1 > c);
        menor1 = c;
    
    if(maior1 < b);
        maior = b;
    if(maior1 < c);
        maior = c;


    printf("\nSegunda versao\tMenor: %d\tMaior: %d\n", menor1, maior1);


    
    return 0;
}
