#include <stdio.h>
#include <stdlib.h>

/*
Foi feita uma pesquisa entre os habitantes de uma regiao e foram coletados os dados de idade, sexo(M/F) e salario de X pessoas (x deve ser informado pelo usuario). Faça um programa que informe:
a) a media de salario do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salario até R$ 2000.00
*/


int main(int argc, char const *argv[])
{
    int idadeMaior, idadeMenor, salarioM2k = 0, idade, x=0;
    char sexo;
    float mediaS, salario;

    printf("\nNumero de pessoas: ");
    scanf("%d", &x);
    

   for(int i = 1; i <= x; i++){
        printf("\nDigite a idade da %da. pessoa: ", i);
        scanf("%d", &idade);
        if(i == 1){
            idadeMenor = idade;
            idadeMaior = idade;
        }
        
        if (idade < idadeMenor){
            idadeMenor = idade;
        }

        if(idade > idadeMaior){
            idadeMaior = idade;
        }

        printf("\nDigite o sexo da %da. pessoa [M,F]: ", i);
        scanf(" %c", &sexo);

        printf("\nDigite o salario da %da. pessoa R$ ", i);
        scanf("%f", &salario);
        mediaS +=salario;
        printf("\n=======================================");

        if(sexo == 'F' && salario <=2000){
            salarioM2k++;
        }
        
        
   }
    
    mediaS = mediaS / x;

    printf("\n\tMedia de salario:............................. R$ %.2f", mediaS);
    printf("\n\tMaior idade:.................................. %d anos", idadeMaior);
    printf("\n\tMenor idade:.................................. %d anos", idadeMenor);
    printf("\n\tMulheres com salario ate R$ 2.000:............ %d", salarioM2k);



    return 0;
}
