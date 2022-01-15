#include <stdio.h>
#include <stdlib.h>

/*
LOOP FOR DESCENDENTE

for (condicao de inicio ; condicao de parada ; decremento);

*/

int main(int argc, char const *argv[])
{
    int i = 10;
    //Sem o loop FOR
    printf("%d " , i--);
    printf("%d " , i--);
    printf("%d " , i--);
    printf("%d " , i--);
    printf("%d " , i--);
    printf("%d " , i--);
    printf("%d " , i--);
    printf("%d " , i--);
    printf("%d " , i--);
    printf("%d " , i--);
    printf("\n");

    //Utilizando o loop FOR
    for( i = 10; i >0; i--){
        printf("%d " , i);
    }
    printf(" ACABOU!");

    return 0;
}
