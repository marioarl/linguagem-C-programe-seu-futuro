#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    printf("Digite uma letra: ");
    scanf(" %c", &b);//colocar o espaco antes de %c

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
    return 0;
}
