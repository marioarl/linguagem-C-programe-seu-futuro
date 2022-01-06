#include <stdio.h>
#include <stdlib.h>


//int: intervalo ==> -2.147.483.648 até 2.147.483.647
int main(int argc, char const *argv[])
{
    int x = 2147483647;
    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x);
    return 0;
}
