#include <stdio.h>
#include <stdlib.h>


/*
Faça um programa onde o usuario inclua pelo teclado 3 notas e que tipo de média deseja calcular e apresente a media.
OPCOES
'a' - Aritmetica
'p' - Ponderada (pesos 3, 3, 4)  
*/

int main(int argc, char const *argv[])
{
    float n1, n2, n3, media;
    char opcao;

    printf("\n=====================================");
    printf("\n========= CALCULAR A MEDIA ==========");
    printf("\n=====================================");

    printf("\nDigite a 1a. nota: ");
    scanf("%f", &n1);

    printf("Digite a 2a. nota: ");
    scanf("%f", &n2);

    printf("Digite a 3a. nota: ");
    scanf("%f", &n3);

    printf("\n\n=== Escolha o tipo de media ===\n[ a ] - Aritimetica\n[ p ] - Ponderada (pesos 3,3,4)\n==>");
    scanf(" %c", &opcao);

    if(opcao == 'a' || opcao == 'A'){
        media = (n1 + n2 + n3) / 3;
        printf("\n\tA media ARTIMETICA do aluno: %.2f", media);
    } else if (opcao == 'p' || opcao =='P'){
        media = (n1 * 3 + n2 * 3 + n3 * 4) / (3 + 3 + 4);
        printf("\n\tA media PONDERADA do aluno: %.2f", media);
    }else {
        printf("\nOPCAO ERRADA, ESCOLHA a (ARITMETICA) ou p(PONDERADA)");
    }
    
    return 0;
}
