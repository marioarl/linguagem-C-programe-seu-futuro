#include <stdio.h>
#include <stdlib.h>

/*
STRING - Sequencia de caracteres, um vetor



*/


int main(int argc, char const *argv[])
{
    char palavras[20] = {"Ola Mundo!!"};

    printf("Digite seu nome: ");
    scanf("%20[^\n]", palavras); //Somente quando é uma string nao é necessario passar o & antes da variavel. POr padrao o scanf() le a variavel até encontrar o 1o. espaço. Devemos colocar %[^\n] para que o scanf() leia a string até que seja pressionado o ENTER
    
    printf("%s\n\n", palavras); 
    
    return 0;
}
