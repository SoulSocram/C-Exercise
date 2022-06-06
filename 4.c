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

    printf("\nAluno 007\n\nNotas: \n- Primeira: %f\n- Segunda: %f\n- Terceira: %f\n", a, b, c);

    if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }

    float media = (a*3 + b*3 + c*4)/10;

    printf("\nMédia ponderada: %f\n", media);

    if(media >= 5){
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
    
    return 0;
}