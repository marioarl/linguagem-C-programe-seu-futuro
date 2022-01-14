#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que o usuario insira 3 valores a, b,c verifique se eles podem formar um triangulo. SE caso positivo, o programa tambem deve dizer se o triangulo é equilatero, isosceles ou escaleno.
*/

int main(int argc, char const *argv[])
{
    float a,b,c;

    printf("\nDigite o 1o. valor: ");
    scanf("%f", &a);

    printf("Digite o 2o. valor: ");
    scanf("%f", &b);

    printf("Digite o 3o. valor: ");
    scanf("%f", &c);

    if( (a + b) > c && (a + c) > b && (c + b) > a){
        printf("\n\nO triangulo pode EXISTIR");
    }if( a == b && a == c && b == c){
        printf("\nTriangulo Equilatero");   
    }
        else if(a == b || a == c || b == c){
            printf("\nTriangulo Isoceles");
        }
        else if(a != b && a != c && b != c){
            printf("\nTriangulo Escaleno");
        }
    else {
        printf("\n\nO triangulo NAO PODE EXISTIR");
    }

    return 0;
}
