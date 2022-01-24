#include <stdio.h>
#include <stdlib.h>


/*
Faça um programa que peça ao usuario dois numeros inteiros e apresente o resultado na multiplicacao entre os dois numeros sem utilizar a operacao de multiplicacao.
*/

int main(int argc, char const *argv[])
{
    
    int n1, n2, sum = 0;

    printf("\nDigite o 1o. numero: ");
    scanf("%d", &n1);
    printf("\nDigite o 2o. numero: ");
    scanf("%d", &n2);

    for (int i = 1; i <=n2; i++){
        sum += n1;
    }

    printf("%d X %d = %d", n1, n2,sum);

    return 0;
}
