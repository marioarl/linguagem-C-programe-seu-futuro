#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que funcione como uma calculadora. O programa deve apresentar um menu da seguinte forma:
1 - somar
2 - subtrair
3 - Multiplicar
4 - Dividir
0 - Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operacao em um case. Apos escolher a operacao, dois valores devem ser pedidos ao usuario para realizar a operacao escolhida. Se a operacao escolhida for 4 o dividendo nao pode ser zero, um novo valor deve ser solicitado. O programa deve funcionar ate que o usuario escolha a opcao 0 (saida)

*/

int main(int argc, char const *argv[])
{   
    float n1, n2;
    int opcao;
    
    do
    {
        printf("\n**********************************");
        printf("\n*     C A L C U L A D O R A      *");
        printf("\n**********************************");
        printf("\n\t[ 1 ] - Somar");
        printf("\n\t[ 2 ] - Subtrair");
        printf("\n\t[ 3 ] - Multiplicar");
        printf("\n\t[ 4 ] - Dividir");
        printf("\n\t[ 0 ] - SAIR");
        
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        printf("\n**********************************");

        if(opcao > 0 && opcao < 5){
            printf("\nDigite o 1o. numero: ");
            scanf("%f", &n1);
            printf("\nDigite o 2o. numero: ");
            scanf("%f", &n2);
        }
        

   
    
        switch(opcao){
            case 1:
                printf("\nSoma entre %.2f e %.2f = %.2f", n1,n2, n1 + n2);
                break;
            case 2:
                printf("\nSubtracao entre %.2f e %.2f = %.2f", n1,n2, n1 - n2);
                break;
            case 3:
                printf("\nMultiplicacao entre %.2f e %.2f = %.2f", n1,n2, n1 * n2);
                break;
            case 4:
                while(n2 == 0){
                    printf("\nNao existe divisao por ZERO!\nDigite outro valor: ");
                    scanf("%f", &n2);
                }
                printf("\nDivisao entre %.2f e %.2f = %.2f", n1,n2, n1 / n2);
                break;
            case 0:
                printf("\nSaindo do Programa!");
                break;
            default:
                printf("\nOPCAO INCORRETA!\nDigite outra opcao: ");
            }
        
    } while (opcao != 0);
    printf("\n\nFIM DO PROGRAMA!");
        
    return 0;
}

