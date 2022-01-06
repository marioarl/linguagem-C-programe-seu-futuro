#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float x = 1.0;
    printf("Tamanho de um float na memoria: %f bytes\n", sizeof x); //Saber o tamanho de uma variavel NÃO É necessario colocar parenteses;
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));//Saber o tamanho de um tipode variavel É necessario colocar parenteses. Apesar de haver a necessidade de usar parenteses neste caso, sizeof nao é uma funcao e sim um operador.
    return 0;
}
