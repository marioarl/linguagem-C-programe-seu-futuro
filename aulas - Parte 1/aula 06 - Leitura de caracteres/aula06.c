#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char sexo = 'k';

    printf("Valor da variavel sexo: %c\n", sexo);
    return 0;

    printf("Digite seu sexo: (f, F, m ou M");
    scanf("%c", &sexo);
    printf("Valor da variavel sexo: %c\n", sexo);
}
