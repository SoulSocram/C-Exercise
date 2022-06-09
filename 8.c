#include <stdio.h>
#include <math.h> 

int main (){

    float x1, y1, x2, y2, resultado;

    
    printf("Insira as coordenadas:\n");
    printf("X1: ");
    scanf("%ff", &x1);
    printf("Y1: ");
    scanf("%ff", &y1);
    printf("X2: ");
    scanf("%ff", &x2);
    printf("Y2: ");
    scanf("%ff", &y2);

    resultado = sqrt(pow((x2-x1), 2) + pow((y2-y1),2));

    printf("\nResultado: %f", resultado);
    
}