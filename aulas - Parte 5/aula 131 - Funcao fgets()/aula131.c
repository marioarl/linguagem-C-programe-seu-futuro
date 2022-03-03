#include <stdio.h>
#include <stdlib.h>

/*
O fgets() é uma funcao para ler arquivos de texto
fgets() - nos parenteses devemos passar 3 parametro 
1)Onde vamos salvar o texto lido
2) A quantidade maxima de caracteres a ser lido
3) Arquivo de onde srá lido o texto, neste caso será o buffer do teclado(stdin), entrada padrao do computador
A funcao fgets() se informarmos uma quantidade acima da qunatidade de caracteres informada, a funcao só vai ler a quantidade informada, diferente das funcoes gets() e scanf()
*/

int main(int argc, char const *argv[])
{
    char palavras[50] = {"Ola Mundo!!"};

    printf("Digite seu nome: ");
    fgets(palavras,50, stdin );
    
    printf("%s\n\n", palavras); 
    return 0;
}
