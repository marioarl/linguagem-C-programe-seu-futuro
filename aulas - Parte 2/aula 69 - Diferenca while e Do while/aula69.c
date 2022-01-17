#include <stdio.h>
#include <stdlib.h>

//Aula 69 - diferencas entre FOR, WHILE e DO WHILE


int main(int argc, char const *argv[])
{
    /*Qual estrutura de repeticao deveremos usar?
    Temos que avaliar o problema que temos que resolver. Ex:
    */
   int i = 0;

    /*
    Imprimir a sequencia de numeros de 0 ate 10. Sabemos exatamente onde começa (0) e onde termina (10), entao de forma muito intuitiva, deveremos usar a estrutura de repeticao FOR
    */
    printf("\nGerado com FOR\n");
    for(i = 0; i <=10; i++)
        printf("%d ", i);
    
    //A mesma sequencia de 0 ate 10 utilizando WHILE
    printf("\nGerado com WHILE\n");
    i = 0;
    while(i <=10){
        printf("%d ", i);
        i++;
    }
    return 0;
}
