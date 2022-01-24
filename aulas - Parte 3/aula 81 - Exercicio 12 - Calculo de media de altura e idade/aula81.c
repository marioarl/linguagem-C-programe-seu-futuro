#include <stdio.h>
#include <stdlib.h>

/*
Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura
b) A altura media dos alunos com mais de 20 anos.
*/


int main(int argc, char const *argv[])
{
    int i, idade, idadeBaixinhos = 0, quantIdadeBaix = 0, quantAlturaMaior20 = 0;
    float alturaMedia, idadeMedia, altura, alturaMais20 = 0;
    for(i =0; i<=45; i++){
        printf("Digite sua idade e sua altura em metros: ");
        scanf("%d%f", &idade,&altura);
        if(altura < 1.7){
            idadeBaixinhos+=idade;
            quantIdadeBaix++;
        }
        
        if (idade > 20){
            alturaMais20+=altura;
            quantAlturaMaior20++;
        }
        
    }
    idadeMedia = (float)idadeBaixinhos / quantIdadeBaix; //Convertendo a variavel idadeBaixinhos para float
    alturaMedia = alturaMais20 / quantAlturaMaior20;
    printf("\nIdade media dos alunos com menos de 1,70m de altura: %.2f", idadeMedia);
    printf("\nAltura media dos alunos cm mais de 20 anos: %.2f", alturaMedia);
    
    return 0;
}
