#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite idade, peso, altura e o sexo(f, F, m, M), :\n");
    scanf("%d%f%f %c", &idade,&peso, &altura,&sexo);

    //buffer do teclado => 45\n56.2\n1.63\n , o \n é um caracter e o programa le como um caractere da variavel sexo. Devemos colocar um espaço no scanf entre %f e %c

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);
    return 0;
}
