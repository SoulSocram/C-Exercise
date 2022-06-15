//Sexo, cor dos olhos, cor dos cabeos, idade em anos
#include <stdio.h>
#include <math.h> 

int main (){

    float a, b, c, d, e, f, x, y;

    
    printf("Para as seguintes equações lineares:\nax + by = c | dx + ey = f\n\nDigite os valores:");
    printf("a: ");
    scanf("%ff", &a);
    printf("b: ");
    scanf("%ff", &b);
    printf("c: ");
    scanf("%ff", &c);
    printf("d: ");
    scanf("%ff", &d);
    printf("e: ");
    scanf("%ff", &e);

    x = (c*e - b*f)/(a*e - b*d);
    y = (a*f - c*d)/(a*e - b*d);

    printf("\nResultado:\nx = %f | y = %f", x, y);
    
}