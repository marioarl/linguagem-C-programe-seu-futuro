#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Elabore um algoritmo que receba por meio do teclado dois valores , um para a variavel "a" e um para a variavel "b". Em seguida faça os passos que achar necessario para que ao final a variavel "a" possua o valor inicialmente de "b" e a variavel "b" possua o valor que inicialmente estava em "a", exiba os valores na tela
*/

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    
    printf("\n\nDigite um valor para a variável a: ");
    scanf("%d", &a);

    printf("\nDigite um valor para a variável b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;


    printf("\n\nValor de a: %d", a);
    printf("\nValor de b: %d", b);
    
    return 0;
}