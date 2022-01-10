#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nResultado logico: %d\n", a < 0);

    if(a < 0)
        printf("\n\tValor nagativo!\n");
    else
        printf("\n\tValor positivo ou igual a zero!\n");
    
    printf("\nContinuação do programa...\n");

    return 0;
}
