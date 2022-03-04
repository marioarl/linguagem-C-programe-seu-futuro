#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Para utilizar a funcao strlen() 

int main(int argc, char const *argv[])
{
    
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    
    //Para saber o tamanho da string 
    printf("Tamanho: %d\n",strlen(palavras));
    
     
    return 0;
}
