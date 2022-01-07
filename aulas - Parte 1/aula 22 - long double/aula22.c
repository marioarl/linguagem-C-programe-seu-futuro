#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //operador long para o tipo double
    //double -> %lf
    //long double -> %Lf
    //__mingw_printf

    float x = 3.1415;

    double y = 3.14159265359;

    //Saida -> 3.141592 tanto o float quanto o double por padrao imprimi 6 digitos apos a virgula
    printf("Valor de y: %lf\n", y);

    //Para imprimir mais casas apos a virgula, deve-se colocar após %. o numero de casas necessarias(ex %.11lf)
    printf("Valor de y: %.11lf", y); // saida -> 3.14159265359


    //Long Double

    long double g = 2.1224574937653;
    printf("O valor de y: %.11lf\n", y);//saida -> 0.0000000000

    /*O numero da variavel g nao apareceu, pois temos uma limitacao do sistema operacional windows, pois nao suporta a impressao de um numero de 16bytes de memoria (128 bits). No MAC e no LINUX basta colocar ao inves de %lf colocar %Lf(L maiusculo)  irá funcionar.

    Para o WIndows deveremos usar a funcao __mingw_printf(); que é uma funcao do compilador para imprimir um numero com 128 bits
    */

   __mingw_printf("Valor de y: %.15Lf\n");
   
    return 0;
}
