#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //prinft é uma funcao de saida \n é um caractere de escape que pula uma linha
    printf("\nOla seja bem-vindo\n\n"); 

    //A funcao printf retorna a quatidade de caraceteres, neste caso abaixo 3
    printf("\nValor retornado: %d", printf("Bom"));
    return 0;
}
