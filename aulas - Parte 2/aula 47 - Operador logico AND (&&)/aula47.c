#include <stdio.h>
#include <stdlib.h>

 /*
    OPERADOR AND ==> representado em Linguagem C &&
    Para o operador && retornar verdadeiro, todos os testes devem retornar verdadeiro
    X1      X2       X1 && X2
    0       0           0
    0       1           0
    1       0           0
    1       1           1 ==> Somente irá retornar verdadeiro se as operacoes forem verdadeiras    

*/

int main(int argc, char const *argv[])
{
    int idade;
    char sexo;
    
    printf("\nDigite seu sexo[m ou f: ");
    scanf("%c", &sexo);
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if(sexo == 'm' && idade == 18)
        printf("Alistamento obrigatorio\n");
    else
        printf("Dispensado!\n");


    return 0;
}
