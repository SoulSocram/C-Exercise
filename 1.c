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
      printf("\nTriangulo inexistente.");
      exit(1);
   }

   if (a==b && b==c)
      printf("\nEquilatero");

   else if (a==b || b==c || c==a)
      printf("\nIsósceles.");

   else
      printf("\nEscaleno.");

   return 0;
}
