#include <stdio.h>
#include <stdlib.h>

//double %lf

int main(int argc, char const *argv[])
{
    float x = 3.1415;

    double y = 3.14159265359;

    //Saida ==> 8 bytes
    printf("Um float precisa de %d bytes de memoria.\n", sizeof y); 

    
    return 0;
}
