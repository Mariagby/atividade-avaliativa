#include <stdio.h>
#include <math.h> // para usar ceil()

int main() {
    /* declaração de variáveis */
    float custo_espetaculo, preco_convite;
    int qtd_convites_custo, qtd_convites_lucro;

    /* entrada de dados */
    printf("Digite o custo total do espetaculo: ");
    scanf("%f", &custo_espetaculo);

    printf("Digite o preco do convite: ");
    scanf("%f", &preco_convite);

    /* processamento */
    qtd_convites_custo = ceil(custo_espetaculo / preco_convite);
    qtd_convites_lucro = ceil((custo_espetaculo * 1.23) / preco_convite);

    /* saída */
    printf("\nQuantidade de convites para cobrir o custo: %d\n", qtd_convites_custo);
    printf("Quantidade de convites para ter lucro de 23%%: %d\n", qtd_convites_lucro);

    return 0;
}

