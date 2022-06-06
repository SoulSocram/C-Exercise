#include <stdio.h>

int main (){

    double a, b, c;

    printf("Insira as notas:\n");
    printf("Primeira nota: ");
    scanf("%lf", &a);
    printf("Segunda nota: ");
    scanf("%lf", &b);
    printf("Terceira nota: ");
    scanf("%lf", &c);

    float media = (a + b + c)/3;

    printf("Nota: %f \n", media);

    if(media >= 6){
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
    
    return 0;
}