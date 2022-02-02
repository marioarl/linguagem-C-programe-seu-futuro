#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Biblioteca para variavel que armazena a hora do computador 

int main(int argc, char const *argv[])
{
    int i;
    int num2[10];

    srand(time(NULL)); //Retorna a hora do computador

    //Gerando numeros aleatorios dentro do vetor
    for(i = 0; i < 10; i++){
        num2[i] = rand(); //Dentro do comando rand(), os programadores da linguagem C colocaram alguns numeros aleatorios SEED padrao, toda vez que será executado os valores serao os mesmos
    }


    printf("\n\n");

    for(i = 0; i <10; i++){
        printf("%d ", num2[i]);
    }
    printf("\n\n");



    return 0;
}
