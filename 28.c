#include <stdio.h>

int main() {
    /* declara��o de vari�vel */
    float valor_compra, valor_prestacao;

    /* entrada de dados */
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    /* processamento */
    valor_prestacao = valor_compra / 5;

    /* sa�da */
    printf("O valor de cada uma das 5 prestacoes e: R$ %.2f\n", valor_prestacao);

    return 0;
}
