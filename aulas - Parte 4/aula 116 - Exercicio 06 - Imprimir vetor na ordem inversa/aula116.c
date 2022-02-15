#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 10 numeros reais e os armazene em um vetor. Em seguida leia um codigo inteiro e faça uma das acoes abaixo:

0 - Finaliza o programa;
1 - Imprime o vetor na ordem do inicio ao fim
2 - Imprime o vetor na ordem inversa (do fim para o inicio)

O programa deve funcionar até que o usuario digite 0 pra finalizar.
*/


int main(int argc, char const *argv[])
{
    int i, opcao;
    float num[10];


    for (i = 0; i < 10; i++){
            printf("Digite um numero [%d de 10]: ", i+1);
            scanf("%f", &num[i]);
        }


    do
    {
        printf("\n0 - Finalizar o Programa\n1 - Imprimir na ordem do inicio ao fim\n2 - Imprimir na ordem inversa\n");
        scanf("%d", &opcao);

       switch (opcao)
       {
       case 0:
           printf("Finalizando...");
           break;
        case 1:
            for(i = 0; i <10; i++){
                printf("%.2f ", num[i]);
            }
            break;

        case 2:
            for(i = 9; i >=0; i--){
                printf("%.2f ", num[i]);
            }
            break;

        default:
            printf("Opcao invalida\n");
           break;
       }
        
    } while (opcao != 0);
    

    



    return 0;
}
