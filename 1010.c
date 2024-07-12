#include <stdio.h>
int main(void)
{
    int peca1, numero1, peca2, numero2;
    float valor1, valor2, calculo;
    scanf("%d %d %f %d %d %f", &peca1, &numero1, &valor1, &peca2, &numero2, &valor2);
    calculo = (numero1 * valor1 + numero2 * valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", calculo);
    return 0;
}
