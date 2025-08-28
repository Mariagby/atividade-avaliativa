#include <stdio.h>

int main() {
    /* declaração de variáveis */
    int num_apartamentos;
    float diaria_normal, diaria_promocional;
    float total_100, total_70, perda_promocao;

    /* entrada de dados */
    printf("Digite o numero de apartamentos do hotel: ");
    scanf("%d", &num_apartamentos);

    printf("Digite o valor da diaria por apartamento (final de semana completo): ");
    scanf("%f", &diaria_normal);

    /* processamento */
    diaria_promocional = diaria_normal * 0.75;
    total_100 = diaria_promocional * num_apartamentos;
    total_70 = diaria_promocional * num_apartamentos * 0.7;
    perda_promocao = (diaria_normal - diaria_promocional) * num_apartamentos;

    /* saída */
    printf("\nValor promocional da diaria: R$ %.2f\n", diaria_promocional);
    printf("Valor total com 100%% de ocupacao: R$ %.2f\n", total_100);
    printf("Valor total com 70%% de ocupacao: R$ %.2f\n", total_70);
    printf("Valor que o hotel deixara de arrecadar com a promocao (100%% ocupacao): R$ %.2f\n", perda_promocao);

    return 0;
}
