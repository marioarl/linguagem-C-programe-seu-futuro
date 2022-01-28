#include <stdio.h>
#include <stdlib.h>

/*
Uma rainha requisitou os servicos de um monge e disse-lhe que pagaria qualquer preço. O monge, necessitando de alimentos, indagou a rainha sobre o pagamento, se poderia ser feito com graos de trigo dispostos em um tabuleiro de xadrez(que possui 64 casas), de tal forma que o primeiro quadrado deveria conter apenas 1 grao e os quadrados subsequentes o dobro do quadrado anterior.
Faça um programa para calcular o total de graos de trigo que o monge recebeu.

Como o numero final será muito grande, deveremos utilizar a funcao do compilador para imprimir o numero, pois no Windows há este problema, em outros OS o resultado será mostrado (Linux, MAC)
__mingw_printf();
*/

int main(int argc, char const *argv[])
{
    int i;
    long double graos=1, soma=1;
    for(i = 1; i < 64; i++){
        graos *= 2;
        soma += graos;
        __mingw_printf("\ni: %d - - graos: %Lf", i, graos); 

    }
    __mingw_printf("\n\nTotal de graos: %Lf", soma);

    return 0;
}
