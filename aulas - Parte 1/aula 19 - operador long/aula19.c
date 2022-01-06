#include <stdio.h>
#include <stdlib.h>


//long int: intervalo ==> podem sofrer uma variacao dependendo do computaor
int main(int argc, char const *argv[])
{
    long long int x = 2147483647;
    printf("Valor de x: %lli\n", x); //lli - long long int ou lld
    x++;
    printf("Valor de x: %lli\n", x);
    return 0;
}
