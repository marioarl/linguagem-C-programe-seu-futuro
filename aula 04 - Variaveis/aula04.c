#include <stdio.h>
#include <stdlib.h>

/*
            Aula 4
        Lendo numeros inteiros
*/

int main(int argc, char const *argv[])
{
    /*Tipos de variaveis
    char  ==> caracter %c ==> 8 bits
    int   ==> numero inteiro %d ==> 32 bits
    float ==> numero real %f ==> 32 bits
    double ==> numeros realis com mais de 15 casas ==> 64 bits
    */
    //Nao pode comecar a variavel com numero, caracteres especiais
    int valor, valor2; //Criei uma variavel para guardar um valor do tipo inteiro

    //Atribuindo 50 na variavel valor
    valor = 50;

    //Usuario digita o valor
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);//&valor digitado pelo usuario(endereco de memoria)

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2); //%d tipo inteiro e fora da aspa dupla com virgula o nome da variavel

    return 0;
}
