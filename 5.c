#include <stdio.h>

int main (){

    int i, a , b , c;
    
    printf("Insira os valores:\n");
    printf("Primeiro valor: ");
    scanf("%df", &a);
    printf("Segundo valor: ");
    scanf("%df", &b);
    printf("Terceiro valor: ");
    scanf("%df", &c);

    printf("\nSelecione uma opção:\n1 - Ordem crescente.\n2 - Ordem descrescente\n3 - Maior valor no centro\n\nInsira:");
    scanf("%df", &i);

    if(i == 1) {
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
    }
    
    if(i == 2) {
        if (a < c) {
            int tmp = c;
            c = a;
            a = tmp;
        }
        if (a < b) {
            int tmp = b;
            b = a;
            a = tmp;
        }
        if (b < c) {
            int tmp = c;
            c = b;
            b = tmp;
        }
    }
    
    if(i == 3) {
        if (a > b) {
            int tmp = b;
            b = a;
            a = tmp;
        }
        if (c > b) {
            int tmp = b;
            b = c;
            c = tmp;
        }
    }

    printf("\n%d, %d, %d", a, b, c);
    
    return 0;
}