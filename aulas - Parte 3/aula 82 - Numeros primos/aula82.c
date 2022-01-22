#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça ao usuario um numero inteiro maior do que 2 e diga se o numero informado é primo ou nao

*/

int main(int argc, char const *argv[])
{
    int num = 0, tot = 0, opcao;

    printf("\n##############################");
    printf("\n#\tNUMEROS PRIMOS       #");
    printf("\n##############################");

    
   do
        {
        printf("\n\nDigite um numero maior do que 1: ");
            scanf("%d", &num);
        } while (num < 2);
    

            for(int i = 1; i <=num; i++){ //Loop para verificar se o numero é primo
                if (num % i == 0){ // Se o numero digitado dividpo pelo indice do loop i for igual a zero, é somado +1 na variavel tot, 
                    tot++; 
                }
            }

                if(tot == 2){//Se a variavel tot = 2, isto quer dizer que o numero é PRIMO
                    printf("\nO numero %d e PRIMO", num);
                }else{
                    printf("\nO numero %d NAO e PRIMO", num);
                }
    






    
    

    return 0;
}
