#include <stdio.h>

int main (){

    float a, b, c;

    printf("Insira os lados do triângulo:\n");
    printf("Primeiro lado: ");
    scanf("%ff", &a);
    printf("Segundo lado: ");
    scanf("%ff", &b);
    printf("Terceiro lado: ");
    scanf("%ff", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else if(a == b || a == c || b == c)
            printf("Isosceles\n");
        else
            printf("Escaleno\n");
    } else {
        printf("Não é um triângulo!\n");
    }
    
    return 0;
}