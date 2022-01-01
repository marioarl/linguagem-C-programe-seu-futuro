#include <stdio.h>
#include <stdlib.h>

/*
    Aula 5
    Lendo numeros reais

*/

int main(int argc, char const *argv[])
{
    float numero = 3.1415;// Por padrao exibira um numero float com 6 casas decimais

    printf("Valor da minha variavel: %.4f\n", numero);//Para formatar com 4 casas colocar apos a % .4 por exemplo

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Valor lido: %.3f", numero);
    return 0;
}
