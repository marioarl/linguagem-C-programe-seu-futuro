#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa que apresente a sequencia conforme o exemplo abaixo:

I=1     J=7
I=1     J=6
I=1     J=5
I=3     J=9
I=3     J=8
I=3     J=7
I=5     J=11
I=5     J=10
I=5     J=9
...
I=9     J=15
I=9     J=14
I=9     J=13
*/


int main(int argc, char const *argv[])
{
    int i, j;
    for(i=1; i<10; i+=2){
        for(j= 6+i; j >= 4 +i; j--){
            printf("\nI=%d  J=%d", i, j);
        }
        printf("\n");
            
    }
    
    return 0;
}
