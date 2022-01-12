#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //SWITCH CASE COM CARACTERES

    char opcao;

    printf("\n[ A ] - Cadastrar Produto\n[ B ] - Vender Produto\n[ C ] - Buscar Produto\n[ D ] - Imprimir\n[ Z ] - Sair\n");
    scanf("%c", &opcao);

    switch (opcao){
        case 'A': //Quando a variavel é char, é necessario colocar a opcao entre '' simples
            printf("\nCadastrando novo Produto\n");
            break;
        case 'B':
            printf("\nProduto vendido\n");
            break;
        case 'C':
            printf("\nBuscando Produto\n");
            break;
        case 'D':
            printf("\nImprimindo relatorio\n");
            break;
        case 'Z':
            printf("\nSaindo do programa...\n");
            break;
        default:
            printf("Opcao invalida");
    }
    printf("\n\nFIM DO PROGRAMA\n");


    return 0;
}
