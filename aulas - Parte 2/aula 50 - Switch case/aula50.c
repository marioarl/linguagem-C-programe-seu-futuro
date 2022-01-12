#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Estrutura de selecao SWITCH CASE

    int opcao;

    printf("\n[ 1 ] - Cadastrar Produto\n[ 2 ] - Vender Produto\n[ 3 ] - Buscar Produto\n[ 4 ] - Imprimir\n[ 5 ] - Sair\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("\nCadastrando novo Produto\n");
            break;
        case 2:
            printf("\nProduto vendido\n");
            break;
        case 3:
            printf("\nBuscando Produto\n");
            break;
        case 4:
            printf("\nImprimindo relatorio\n");
            break;
        case 5:
            printf("\nSaindo do programa...\n");
            break;
        default:
            printf("Opcao invalida");
    }
    printf("\n\nFIM DO PROGRAMA\n");


    return 0;
}
