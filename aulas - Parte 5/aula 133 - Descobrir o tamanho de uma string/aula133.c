#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, tam = 0;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};
    
    //Quando utilizamos o fgest, digitamos e palavra e apertamos o ENTER, o ENTER tambem será computado como um caractere. Temos que fazer um outro WHILE para retirar o ENTER
    fgest(palavras, 15,stdin);

    i = 0;
    while(palavras[i] != '\0'){
        if(palavras[i] == '\n') //Se o caracter for igual a ENTER, será substituido pelo caracter \0
            palavras[i] = '\0';
        i++;
    }




    for(i = 0; i < 55; i++){
        printf("%d = %d\n", i, palavras[i]);
    }
    printf("\n");

    //Descobrindo o tamanho da string
    i = 0;
    while(palavras[i] != '\0'){
        tam++;
        i++;
    }
    printf("Tamanho: %d\n", tam);
     
    return 0;
}
