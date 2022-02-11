#include <stdio.h>
#include <stdlib.h>


/*
Uma pequena loja de artesanati possui apenas um vendedor e comercializa 10 tipos de objetos diferentes. O vendedor recebe um salario de R$1100.00 acrescidos de 5% do valor total de suas vendas. O valor unitario dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de cada objeto deve ficar em outro vetor, mas na mesma posicao. Crie um programa que receba os precos e as quantidades vendidas, armazenado-os em seus respectivos vetores. Depois determine e mostre:
a) A quantidade vendida, valor unitario e valor total de cada objeto. Ao final deverao ser mostrados o valor total das vendas e o valor da comissao que sera paga ao vendedor.
b) O valor do objeto mais vendido e sua posicao no vetor(em caso de empates, mostre todos empatados)
*/

int main(int argc, char const *argv[])
{
    int i, maisVendido = 0, quant[10];
    float valorTotal = 0, valorParcial, valor[10];

    for(i =0; i <10; i++){
        printf("Digite valor unitario e quantidade vendia: ");
        scanf("%f%d", &valor[i], &quant[i]);
    }

    //Resposta a
    for(i = 0; i <10; i++){
        valorParcial = quant[i] * valor[i];
        printf("\nVendido: %d\tValor unitario R$%.2f\tValor total R$%.2f\n", quant[i],valor[i], valorParcial);
        valorTotal += valorParcial;
    }
    printf("Valor tota das vendas R$%.2f\n", valorTotal);
    printf("Comissao paga ao vendedor R$%.2f\n", valorTotal * 0.05);
    return 0;

    //Resposta b
    for(i = 0; i <10; i++){
        if(quant[i] > maisVendido)
        maisVendido = quant[i];
    }
    for(i = 0; i <10; i++){
        if(quant[i] == maisVendido){
            printf("Posicao: %d\tValor R$%.2f\n", i, valor[i]);
        }
    }

}
