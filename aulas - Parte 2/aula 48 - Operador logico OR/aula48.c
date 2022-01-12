#include <stdio.h>
#include <stdlib.h>

/*
    OPERADOR OR ==> representado em Linguagem C ||
    Para o operador || retornar verdadeiro, apenas um teste deve ser verdadeiro
    X1      X2       X1 || X2
    0       0           0 ==> Somente irá retornar FALSO se as operacoes forem FALSAS
    0       1           1
    1       0           1
    1       1           1     

*/


int main(int argc, char const *argv[])
{
    int idade;
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if(idade <= 5 || idade >= 60){
        printf("Tem direito a gratuidade!\n");
    } else {
        printf("Nao tem direito a gratuidade\n");

    }
    
    return 0;
}
