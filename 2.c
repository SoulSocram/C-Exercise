#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Insira as medidas do triângulo:\n");
    printf("Primeiro lado: ");
    scanf("%df", &a);
    printf("Segundo lado: ");
    scanf("%df", &b);
    printf("Terceiro lado: ");
    scanf("%df", &c);
    
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
    printf("Ordem crescente: %d, %d, %d", a, b, c);
}