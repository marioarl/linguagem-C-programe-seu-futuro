#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char a, b;
    printf("Digite duas letras: ");
    scanf("%c %c",&a, &b );//espaco entre os %c => comadno para o computador desconsiderar o ENTER, TAB e ESPAÇO

    //buffer do teclado ==> f\n ou f . 
    //nao utilizar a funcao fflush(); só serve no windows

    printf("Primeira letra: %c\nSegunda letra %c\n", a, b);
    return 0;
}
