#include <stdio.h>

int main() {

    float ipi;
    int codigo[2];
    float valor[2];
    int quant[2];
    float resultado;
    
    printf("Insira a porcentagem do IPI:\n");
    scanf("%ff", &ipi);

    for(int i = 0; i < 2; i++){

        printf("Código da peça %d: ", i+1);
        scanf("%df", &codigo[i]);
        printf("Valor da peça: ");
        scanf("%ff", &valor[i]);
        printf("Quantidade: ");
        scanf("%df", &quant[i]);

    }

    resultado = ((valor[0]*quant[0])+(valor[1]*quant[1]))*(ipi/100 + 1);

    for(int i = 0; i < 2; i++){
        printf("\nCódigo da peça: %d | Quantidade: %d | Valor: %f", codigo[i], quant[i], valor[i]);
    }

    printf("\nPorcentagem do IPI: %f porcento", ipi);
    printf("\nValor a ser pago: R$%f", resultado);

    return 0;
}
