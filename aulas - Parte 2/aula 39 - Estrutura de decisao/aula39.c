#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0)
        printf("\n\tValor nagativo!\n");
    printf("\nContinuação do programa...\n");
    
    return 0;
}
