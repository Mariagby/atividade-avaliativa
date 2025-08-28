#include <stdio.h>

int main() {
    /* declaração de variáveis */
    float custo_fabrica, custo_com_impostos, custo_consumidor;
    float impostos, distribuidor;

    /* entrada de dados */
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    /* processamento */
    impostos = custo_fabrica * 0.45;
    custo_com_impostos = custo_fabrica + impostos;

    distribuidor = custo_com_impostos * 0.28;
    custo_consumidor = custo_com_impostos + distribuidor;

    /* saída */
    printf("O custo ao consumidor do carro e: R$ %.2f\n", custo_consumidor);

    return 0;
}
