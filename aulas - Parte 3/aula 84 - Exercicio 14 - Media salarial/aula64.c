#include <stdio.h>
#include <stdlib.h>


/*
Faça um programa que calcule a media de salarios de uma emrpresa, pedindo ao usuario a quantidade de funcionarios e o salario de cada funcionario.
Ao final, o programa deve imprimir a media dos salarios informados, o salario mais alto e o salario mais baixo.
*/

int main(int argc, char const *argv[])
{
    int qtdFunc;
    float salario, sumSalario = 0, altSalario, baixoSalario;


    do
    {
        printf("\nQuantidade de funcionarios: ");
        scanf("%d", &qtdFunc);
    } while (qtdFunc < 0);
    
    

    for(int i = 1; i <= qtdFunc; i++){
        printf("\nDigite o salario do %do. funcionario: ", i);
        scanf("%f", &salario);
        if (i == 1){
            altSalario = salario;    
        } 
        if(salario > altSalario){
                altSalario = salario;
            }
        if (i == 1){
            baixoSalario = salario;    
        } 
        if(salario < baixoSalario){
                baixoSalario = salario;
            }

        sumSalario += salario;
    }


    printf("\n\tQuantidade de funcionarios:...... %d", qtdFunc);
    printf("\n\tMedia do salario:................ R$ %.2f", sumSalario/qtdFunc);
    printf("\n\tSalario mais alto:............... R$ %.2f", altSalario);
    printf("\n\tSalario mais baixo:.............. R$ %.2f", baixoSalario);
    


    return 0;
}
