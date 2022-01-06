#include <stdio.h>
#include <stdlib.h>

//short int: intervalo ==> -32.768 até 32.767
/*Se tentarmos armazenar em um short int um numero maior que 32767 (por exemplo 32768) o resultado
será de -32768. Isto ocorre pelo seguinte fato:
32767 em binario ==> 111111111111111 (15 digitos), existe o bit mais significativo que diz se o numero é positivo(0) ou negativo(1)
32768 em binario ==>  10000000000000000 (16 digitos), ou seja, quando colocamos o numero 32768 na variavel short int, haverá um estouro de memoria e o computador vai ler o numero binario como sendo negativo.



*/   

int main(int argc, char const *argv[])
{
    int y = 0;
    short int x = 32767;
    printf("Tamanho de um int na memoria: %d bytes\n", sizeof y); //A saida será de 4 bytes
    printf("Tamanho em memoria de short int: %d bytes\n", sizeof x); //A saida será de 2 bytes





    return 0;
}
