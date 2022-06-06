#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Insira os valores:\n");
    printf("Primeiro valor: ");
    scanf("%df", &a);
    printf("Segundo valor: ");
    scanf("%df", &b);
    printf("Terceiro valor: ");
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