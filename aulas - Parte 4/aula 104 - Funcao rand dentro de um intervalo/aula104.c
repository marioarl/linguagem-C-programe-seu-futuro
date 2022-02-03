#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    int num2[10];

    srand(time(NULL));

    for(i = 0; i < 10; i++){
        num2[i] = rand() % 100;  //Estipulando um intervalo de 0 a 99, que podem se repetir
    }

    printf("\n\n");

    for(i = 0; i <10; i++){
        printf("%d ", num2[i]);
    }
    printf("\n\n");
    
    return 0;
}
