#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o individuo se enquadra de acordo com a tabela abaixo:

    IMC                     OBS 
    Menor que 18.5          Abaixo do peso
    Entre 18.5 e 24         Peso normal
    Entre 25 e 29           Sobrepeso
    Entre 30 e 34           Obesidade Grau 1
    Entre 35 e 39           Obesidade Grau 2
    Maior ou igual a 40     Obesidade Grau 3

    Calculo do IMC = peso / altura²
    
    */

int main(int argc, char const *argv[])
{   
    printf("\n======================================================\n");
    printf("PROGRAMA PARA CALCULO DE IMC(INDICE DE MASSA CORPORAL\n");
    printf("======================================================\n\n");

    float peso, altura, imc;

    printf("Digite seu peso em Kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em m: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("\nSeu IMC = %.1f ==> Abaixo do peso", imc);
    } else if (imc >= 18.5 && imc < 25){
        printf("\nSeu IMC = %.1f ==> Peso normal", imc);

    } else if (imc >= 25 && imc < 30){
        printf("\nSeu IMC = %.1f ==> Sobrepeso", imc);

    } else if (imc >= 30 && imc < 35){
        printf("\nSeu IMC = %.1f ==> Obesidade Grau I", imc);

    } else if (imc >= 35 && imc < 40){
        printf("\nSeu IMC = %.1f ==> Obesidade Grau II", imc);

    }else {
        printf("\nSeu IMC = %.1f ==> Obesidade Grau III", imc);
    }


     
    return 0;
}