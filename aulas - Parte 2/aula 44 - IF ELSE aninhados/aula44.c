#include <stdio.h>
#include <stdlib.h>

//IF ELSE ANINHADOS

int main(int argc, char const *argv[])
{
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);


    if(a < 0){
        printf("\n\tValor nagativo!\n");
    }
        
    else{
        if( a > 0)
            printf("\n\tValor positivo\n");
        else 
            printf("\n\tValor igual a zero!\n");
    }
    
    printf("\nContinuação do programa...\n");

    return 0;
}
