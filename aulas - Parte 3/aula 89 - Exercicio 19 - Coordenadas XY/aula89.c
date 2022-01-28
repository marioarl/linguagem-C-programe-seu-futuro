#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa para ler as coordenadas (x, y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma das coordenadas for NULA(nesta situacao sem escrever mensagem alguma)
*/


int main(int argc, char const *argv[])
{
    int x, y;
    

    printf("\n#############################################");
    printf("\n##### COORDENADAS DO SISTEMA CARTESIANO #####");
    printf("\n#############################################");

    
    do
    {
        printf("\n\nDigite a coordenada X: ");
        scanf("%d", &x);

        printf("Digite a coordenada Y: ");
        scanf("%d", &y);

        if (x > 0 && y > 0){
            printf("\nAs coordenadas X: %d, Y: %d estao no Quadrante I", x, y);
        } else if (x <0 && y > 0){
            printf("\nAs coordenadas X: %d, Y: %d estao no Quadrante II", x, y);
        } else if (x < 0 && y < 0){
            printf("\nAs coordenadas X: %d, Y: %d estao no Quadrante III", x, y);
        }else if (x > 0 && y <0){
            printf("\nAs coordenadas X: %d, Y: %d estao no Quadrante IV", x, y);
        } else {
            printf("\nVoce digitou 0 em alguma coordenada, saindo do programa!");
        }
        printf("\n#############################################");
   
    } while (x != 0 && y != 0 );
    

   printf("\n\nFIM DO PROGRAMA");
    
    return 0;
}
