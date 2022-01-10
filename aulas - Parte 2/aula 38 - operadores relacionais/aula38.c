#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    OPERADORES RELACIONAIS

    Menor que           <
    Maior que           >
    menor ou igual      <=
    maior ou igual      >=
    igual               ==
    diferente           !=
    */

   int a = 10, b = 20;

   printf("Resultado: %d\n\n", a < b); //O resultado será 1(True)
   printf("Resultado: %d\n\n", a > b); //O resultado será 0(False)

   /*
    A biblioteca STANDARD da linguagem C nao possui o tipo BOOLEANO, por isso o resultado de operacoes relacionais será 0 ou 1.
     
   */



    return 0;
}
