#include <stdio.h>
#include <stdlib.h>

/*
LOOP FOR

for (condicao de inicio ; condicao de parada ; incremento);

*/

int main(int argc, char const *argv[])
{
    int i = 0;
    //Sem o loop FOR
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("%d " , i++);
    printf("\n");

    //Utilizando o loop FOR
    for( i = 0; i <10; i++){
        printf("%d " , i);
    }
    printf(" ACABOU!");

    return 0;
}
