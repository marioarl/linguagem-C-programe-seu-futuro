#include <stdio.h>
#include <stdlib.h>

/* OPERADOR unsigned

trocar o %d por %u
limite para o tipo int: -2.147.483.648 a 2.147.483.647
VER TABELA COMPLETA na aula 04 - variaveis



*/
int main(int argc, char const *argv[])
{
    int x = 2147483647;
    printf("\n\t%d\n\n", x++); // A saida será ==> -2147483648 , isto ocorre por conta do limite do tipo INT

    unsigned int x1 = 2147483647;
    
    /*Quando colocamos o UNSIGNED antes do INT, o limite da variavel será modificado:
                            limite: 0 a 4.294.967.295
    Ou seja, quando colocamos o UNSIGNED antes do INT, a linguagem C nao se preocupará com o limite negativo e nao terá mais o sinal negativo.

    VANTAGEM: Aumentará o intervalo de numeros positivos desta variavel
    */
    printf("\n\t%u\n\n", x1++); // A saida será ==> 2147483648 ==> para imprimir deverá ser usado o %u









    return 0;
}
