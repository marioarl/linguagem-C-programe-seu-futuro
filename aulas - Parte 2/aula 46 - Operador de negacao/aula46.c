#include <stdio.h>
#include <stdlib.h>

//OPERADOR DE NEGACAO !

int main(int argc, char const *argv[])
{
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    //Operador de negacao em um operador ternario
    !(a < 0) ? printf("\n\tValor positivo ou igual a zero\n") : printf("\n\tValor nagativo!\n");


    //Operador de negacao em um IF ELSE
    if(!(a < 0)){
        printf("\n\tValor positivo ou igual a zero\n");
    }
        
    else{
        printf("\n\tValor nagativo!\n");
    }
        //A indentacao nao altera a execucao do programa, o que altera sao as chaves {}
    
    printf("\nContinuação do programa...\n");

    return 0;
}
