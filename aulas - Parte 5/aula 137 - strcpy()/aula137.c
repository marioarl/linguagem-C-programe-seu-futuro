#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char palavra1[50] = {"bola"};
    char palavra2[50] = {"abacate"};
    printf("\nAntes de copiar:\npalavra 1:%s\npalavra 2: %s\n",palavra1, palavra2);

    strcpy(palavra2, palavra1); //1o. parametro = onde vamos salvar a copia da string, 2o. parametro =  a origem da string
    printf("\npalavra 1:%s\npalavra 2: %s\n",palavra1, palavra2);
    printf("\nDepois de copiar:\npalavra 1:%s\npalavra 2: %s\n",palavra1, palavra2);
    return 0;
}
