#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa para ler as notas da primeira e segunda avaliacao de um aluno. Calcule e imprima a media semestral. O programa deverá aceitar apenas as notas no intervalo de 0 ate 10. Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem "novo calculo? (1-sim 2-nao)", solicitando ao usuario que informe um cdigo de ( 1 ou 2), indicando se ele deseja ou nao executar o programa novamente. Se for informado o codigo 1, deve ser repetida a execucao de todo o programa para permitir um novo calculo, se for informado o codigo 2 o programa deve ser encerrado.
 
*/


int main(int argc, char const *argv[])
{
    float n1=0, n2=0, media=0;
    int opcao;

    printf("\n###########################################");
    printf("\n############# MEDIA DO ALUNO ##############");
    printf("\n###########################################");

    do
    {

        do
        {
            printf("\nDigite a 1a. nota (0 ate 10): ");
            scanf("%f", &n1);
            if(n1 <0 || n1 >10){
                printf("NOTA INCORRETA!");
            }
        } while (n1 <0 || n1 >10 );


        do
        {
            printf("\nDigite a 2a. nota (0 ate 10): ");
            scanf("%f", &n2);
            if(n2 <0 || n2 >10){
                printf("NOTA INCORRETA!");
            }
        } while (n2 <0 || n2 >10 );


        media = (n1 + n2) / 2;

        printf("\n\nMedia semestral do aluno: %.2f", media);


       do
        {
            printf("\nNovo calclulo? (1-sim 2-nao): ");
            scanf("%d", &opcao);
            if(opcao !=1 && opcao !=2){
                printf("\nOPCAO INVALIDA!");
            }
        } while (opcao !=1 && opcao !=2);
        
        
        
    } while (opcao == 1);
    printf("\n\nFIM DO PROGRAMA!!!");
    
    return 0;
}
