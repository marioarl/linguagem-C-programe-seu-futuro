#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça ao usuario um carater e diga se é uma vogal ou não

*/

int main(int argc, char const *argv[])
{
    char letra, letra1;

    printf("\nDigite uma letra: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'A'){
        printf("\nA letra %c e uma VOGAL.", letra);
    }else if(letra == 'e' || letra == 'E'){
        printf("\nA letra %c e uma VOGAL.", letra);
    }else if(letra == 'i' || letra == 'I'){
        printf("\nA letra %c e uma VOGAL.", letra);
    }else if(letra == 'o' || letra == 'O'){
        printf("\nA letra %c  uma VOGAL.", letra);
    }else if(letra == 'u' || letra == 'U'){
        printf("\nA letra %c e uma VOGAL.", letra);
    } 
    else {
        printf("\nA letra %c NAO E uma VOGAL.", letra);
    }

    return 0;
}
