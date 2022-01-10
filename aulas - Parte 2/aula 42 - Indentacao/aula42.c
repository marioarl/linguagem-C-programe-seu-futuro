#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);


    if(a < 0){
        printf("\n\tValor nagativo!\n");
    }
        
    else{
        printf("\n\tValor positivo ou igual a zero!\n");
    }
        //A indentacao nao altera a execucao do programa, o que altera sao as chaves {}
    
    printf("\nContinuação do programa...\n");

    return 0;
}
