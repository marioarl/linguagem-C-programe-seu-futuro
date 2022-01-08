#include <stdio.h>
#include <stdlib.h>

//OPERADOR DE DECREMENTO --

int main(int argc, char const *argv[])
{
    //Pos-decremento contador-- ==> primeiro le a variavel e depois decrementa com - 1
    //Pre-decremento --contador ==> Primeiro decrementa a variavel com - 1 e depois le a variavel
    //Forma resumida de decremento na variavel ==> contador -= 1 (ou outro numero qualquer)
    //Forma padrao de decremento na variavel ==> contador = contador - 1 (ou outro numero qualquer)
    int contador = 10;
    printf("Valor: %d\n", contador--);

    return 0;
}