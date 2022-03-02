#include <stdio.h>
#include <stdlib.h>

/*
STRING - Sequencia de caracteres, um vetor



*/


int main(int argc, char const *argv[])
{
    char palavras[] = {"Ola Mundo!!"}; //String, pode informar o tamanho da string

    printf("%c", palavras[4]); //Se quisermos imprimir a 4 letra desta string (M)
    printf("%s\n\n", palavras); // Irá imprimir a String inteira
    
    return 0;
}
