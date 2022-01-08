#include <stdio.h>
#include <stdlib.h>

//OPERADOR DE INCREMENTO ++

int main(int argc, char const *argv[])
{
    //Pos-incremento contador++ - primeiro le a variavel e depois incrementa com + 1
    //Pre-incremento ++contador - Primeiro incrementa a variavel com + 1 e depois le a variavel
    //Forma resumida de incremento na variavel ==> contador += 1 (ou outro numero qualquer)
    //Forma padrao de incremento na variavel ==> contador = contador + 1 (ou outro numero qualquer)
    int contador = 10;
    printf("Valor: %d\n", contador++);

    return 0;
}
