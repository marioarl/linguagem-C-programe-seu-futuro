#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char letra;

    printf("Digite um caracter: ");
    letra = fgetc(stdin);

    printf("Caracter lido: %c\n", letra);

    return 0;
}
