#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que repita a leitura de uma senha ate que ela seja valida.
Para cada leitura de senha incorreta, escrever a mensagem "SENHA INVALIDA!". Quando a senha for informada corretamente deve ser imressa a mesagem "ACESSO PERMITIDO" e o programa deve ser encerrado.
Considere que a senha correta é o valor 123456. 
*/

int main(int argc, char const *argv[])
{
    int num, senha;
    senha = 123456;
    do{
        printf("\nDigite sua senha: ");
        scanf("%d", &num);
        printf("\nSENHA INVALIDA!");
    }while(num != senha);

    printf("\nACESSO PERMITIDO");
    return 0;
}

