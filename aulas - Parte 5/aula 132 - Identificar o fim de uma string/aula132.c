#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};
    
    //Imprimindo os codigos decimais da tabela ASC para saber qual é o caratere nulo, que identifica o fim da string, neste caso o resultado será o 0(zero) na tabela ASC será o NULL com o codigo de escape \0, indica o fim de uma string
    for(i = 0; i < 55; i++){
        printf("%d = %d\n", i, palavras[i]);
    }
    printf("\n");

    //Imprimindo a string somente com as posicoes preenchidas e excluindo o caracter de escape \0, utilizando o WHILE
    i = 0;
    while(palavras[i] != '\0'){
        printf("%d = %c\n", i, palavras[i]);
        i++;
    }
    printf("\n");
     
    return 0;
}
