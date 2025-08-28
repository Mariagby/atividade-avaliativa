#include <stdio.h>

int main() {
    /* declaração de variáveis */
    float C, F;

    /* entrada de dados */
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);

    /* processamento */
    F = (9 * C + 160) / 5;

    /* saída */
    printf("Temperatura em Fahrenheit: %.2f\n", F);

    return 0;
}
