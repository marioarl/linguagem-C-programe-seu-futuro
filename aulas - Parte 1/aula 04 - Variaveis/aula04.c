#include <stdio.h>
#include <stdlib.h>

/*
            Aula 4
        Lendo numeros inteiros
*/

int main(int argc, char const *argv[])
{
    /*Tipos de variaveis
    Tipo            Num de bits     Formato i/o            Inicio                Fim
    char                8               %c                   -128                127
    unsigned char       8               %c                      0                255
    int                 32              %d         -2.147.483.648      2.147.483.647
    unsigned int        32              %u                      0      4.294.967.295
    long int            32              %li        -2.147.483.648      2.147.483.647
    unsigned long int   32              %lu                     0      4.294.967.295
    short int           16              %hi               -32.768             32.767
    unsigned short int  16              %hu                     0         65.535
    float               32              %f               3.4 E-38       3.4 E+38
    double              64              %lf             1.7 E-308       1.7 E+308
                        
    

    */
    //Nao pode comecar a variavel com numero, caracteres especiais
    int valor, valor2; //Criei uma variavel para guardar um valor do tipo inteiro

    //Atribuindo 50 na variavel valor
    valor = 50;

    //Usuario digita o valor
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);//&valor digitado pelo usuario(endereco de memoria)

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2); //%d tipo inteiro e fora da aspa dupla com virgula o nome da variavel

    return 0;
}
