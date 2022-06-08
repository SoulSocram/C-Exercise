#include <stdio.h>

int main (){

    float i, a , b , c, media;

    
    printf("Insira os valores:\n");
    printf("Primeiro valor: ");
    scanf("%ff", &a);
    printf("Segundo valor: ");
    scanf("%ff", &b);
    printf("Terceiro valor: ");
    scanf("%ff", &c);

    printf("\nSelecione a média a ser realizada:\n1 - Aritmética simples\n2 - Aritmética ponderada (pesos: 3, 3, 4)\n3 - Harmônica\n\nInsira: ");
    scanf("%ff", &i);

    if(i == 1) {
        media = (a + b + c)/3;
    }
    if(i == 2) {
        media = (a*3 + b*3 + c*4)/10;
    }
    if(i == 3) {
        media = 3/((1/a)+(1/b)+(1/c));
    }

    printf("\nResultado: %f", media);
    
}