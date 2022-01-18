#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que imprimira na tela todos os multiplos de 7 entre 1 e 9999. 
*/


int main(int argc, char const *argv[])
{

    printf("\n-=-=-=-=-=-= MULTIPLOS DE 7 DE 1 A 9999 -=-=-=-=-=-=\n");
    for(int i = 1; i < 10000; i++){
        if(i % 7 == 0)
            printf("%4d ", i);
    }

    //Melhorando o programa
    printf("\n-=-=-=-=-=-= MULTIPLOS DE 7 DE 1 A 9999 -=-=-=-=-=-=\n");
    for(int i = 7; i < 10000; i+=7)
        printf("%4d ", i);
        

    return 0;
}
