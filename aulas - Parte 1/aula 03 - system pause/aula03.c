#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("\n----------------------------------\n");
    printf("1 - Logar    2 - Cadastrar      3 - Imprimir\n");
    printf("\n----------------------------------\n");

    /*system("pause"); - Nao deve ser utilizado porque esta funcao system é do
    WINDOWS se voce estiver utilizando qualquer outro sistema, ele nao vai funcionar.
    */

    //A funcao getchar deve ser utilizada quando voce nao utilizar uma IDE e deve ser colocada no final do codigo
    printf("\nPressione qualquer tecla para finalizar.");
    getchar();


    return 0;
}
