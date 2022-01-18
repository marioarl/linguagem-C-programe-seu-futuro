#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia as notas referentes as duas avaliacaoes de um aluno.
Calcule e imprime a media semestral. Faça com que o programa so aceite notas validas (nota valida deve pertencer ao intervalo de 0 a 10).
Cada nota deve ser validada separadamente
*/


int main(int argc, char const *argv[])
{
    float n1, n2;
    float media;
    printf("\n************CALCULO DE MEDIA DO ALUNO************");

    do
    {
        printf("\nDigite a 1a. nota: ");
        scanf("%f", &n1);
        if (n1 > 10)
            printf("NOTA INCORRETA, digite um nota entre 0 e 10");
    } while (n1 > 10);

    do
    {
        printf("\nDigite a 2a. nota: ");
        scanf("%f", &n2);
        if (n2 > 10)
            printf("NOTA INCORRETA, digite um nota entre 0 e 10");
    } while (n2 > 10);

    media = (n1 + n2) / 2;

    printf("\n\tNota 1 = %.2f\n\tNota 2 = %.2f", n1, n2);

    printf("\n*********************************");
    printf("\n\tMedia: %.2f", media);
    
    

    return 0;
}
