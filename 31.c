#include <stdio.h>

int main() {
    /* declaração de variáveis */
    float salario_atual, aumento, novo_salario;

    /* entrada de dados */
    printf("Digite o salario atual: ");
    scanf("%f", &salario_atual);

    /* processamento */
    aumento = salario_atual * 0.37;
    novo_salario = salario_atual + aumento;

    /* saída */
    printf("O novo salario com aumento de 37%% e: R$ %.2f\n", novo_salario);

    return 0;
}
