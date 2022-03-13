#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

//Comparar strings com a funcao strcmp()

int main(int argc, char const *argv[])
{
    char palavra1[50] = ("Oi.");
    char palavra2[50] = ("Bom dia.");

    printf("\n\nResultados: %d\n\n", strcmp(palavra1, palavra2));


    /*
    Os possiveis resultados da funcao strcmp() sao:

    0  -> Quando as strings sao iguais
    1  -> Quando a 1a. string estiver abaixo da ordem com o 1o. caracter de acordo com o alfabeto
    -1 -> Quando a 1a. string estiver acima da ordem com o 1o. caracter de acordo com o alfabeto   
    Ex: str1 = ("bola");
        str2 = ("abacate");
        O resultado será 1, porque o 1o. caractere da str1 comeca com a letra "b" e o 1o. caractereda  str2 começa com a letra "a" 

        str1 = ("abacate");
        str2 = ("bola");
        O resultado será -1, porque o 1o. caractere da str1 comeca com a letra "a" e o 1o. caractere da str2 começa com a letra "b" 

    */


    return 0;
}
