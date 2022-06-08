#include <stdio.h>

int main (){

    double a, b, c;
    
    printf("Insira as medidas do triângulo:\n");
    printf("Primeiro lado: ");
    scanf("%lf", &a);
    printf("Segundo lado: ");
    scanf("%lf", &b);
    printf("Terceiro lado: ");
    scanf("%lf", &c);

   if (a>=b+c || b>=c+a || c>=a+b) {
      puts("Triangulo inexistente.");
      exit(1);
   }

   if (a==b && b==c)
      puts("Equilatero");

   else if (a==b || b==c || c==a)
      puts("Isósceles.");

   else
      puts("Escaleno.");

   return 0;
}