#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Para incluir a biblioteca com os acentos 
/* Tabela ASCII e acentuacao
1 byte (8 bits) ==> -128 até 127
unsigned 1 byte ==> 0 até 255

9 é o caractere de tabulacao \t
10 é caracatere de nova linha \n
65 é a letra A maiuscula
66 é a letra B maiuscula
90 é a letra Z maiuscula

*/


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    /*   setlocale( LC_ALL, NULL); ==> padrao da linguagem C , nao tem muita utilidade para acentos
         setlocale(LC_ALL, ""); ==> padaro do sistema operacional ,  se o OS estiver em outro idioma em outro computador, irá gerar um problema
         setlocale(LC_ALL, "Portuguese"); portugues Brasileiro , melhor possibilidade para utilizar acentos
    */
    printf("Coração\n"); // A impressao de coração nao saira correta, este problema acontece somente no WINDOWS

    char letra = 'f';
    print("%d", letra); //A saida será 102
    print("%c", 102); // A saida será f
    print("%c", 103); //A saida será g

    //Para corrigir o problema da acentuacao, devemos incluir a biblioteca <locale.h> no inicio do programa e a funcao setlocale() no inicio do main
    printf("coração");

    //Para verificar se houve a alteracao de idioma na lingugem C podemos utilizar o printf abaixo
    printf("%s\n",setlocale(LC_ALL, "Portuguese")); // saida ==> Portuguese_Brazil.1252


    return 0;
}
