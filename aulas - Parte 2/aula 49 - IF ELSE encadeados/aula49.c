#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    //Primeira versao
    if(a < 0){
        printf("\n\tValor nagativo!\n");
    }
        
    else{
        if( a > 0)
            printf("\n\tValor positivo\n");
        else 
            printf("\n\tValor igual a zero!\n");
    }
    
    //segunda versao
    if(a < 0){
        printf("\n\tValor negativo!\n");
    }else if (a > 0){
        printf("\n\tValor positivo\n");
    }else {
        printf("\n\tValor igual a zero!\n");
    }

    return 0;
}
