#include <stdio.h>
#include <stdlib.h>

//tamanho do float 4 bytes %f

int main(int argc, char const *argv[])
{
    float x = 3.1415;

    printf("Um float precisa de %f bytes de memoria.\n", sizeof x);
    return 0;
}
