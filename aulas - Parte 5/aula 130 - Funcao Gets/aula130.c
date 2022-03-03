#include <stdio.h>
#include <stdlib.h>

/*
Utilizando a funcao scanf() para ler Strings pode ser arriscado, pois por padrao o scanf() vai ler até o 1o. espaço e temos como evitar esse problema e fazer com que o scanf() leia até aque o ENTE seja pressionado - scanf("[^\n]", palavras). 

O scanf() por padrao nao se preocupa com o tamanho do vetor e pode acabar lendo mais dados do que a capacitade do seu vetor e para resolver isso informamos a quantidade maixma de caracteres que ele pode ler do buffer do teclado - scanf("%20[^\n", palavras) 

Temos outras funcoes que podemos utilizar, nesta aula vamos utilizar o gets(). A funcao gets() nao é muito segura e nao é recomendado utilizar o gets(). Dependendo do sistema operacional que voce estiver usando ou o compilador que voce estiver usando, vai apresentar algum erro no gets().


*/

int main(int argc, char const *argv[])
{
    char palavras[20] = {"Ola Mundo!!"};

    printf("Digite seu nome: ");
    gets(palavras); //ENtre os paranteses devemos passar onde será salvo o conteudo
    
    printf("%s\n\n", palavras); 
    return 0;
}
