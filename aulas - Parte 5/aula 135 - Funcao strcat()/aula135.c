#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Para utilizar a funcao strcat()

//Funcao strcat()

int main(int argc, char const *argv[])
{
    char palavras[50] = ("Oi.");

    strcat(palavras, "Bom dia."); //2 parametros - 1o. A string que necessita da concatenacao 2o. parametro outra string ou diretamente o texto desejado

    printf("\n\t%s\n", palavras);

    return 0;
}
