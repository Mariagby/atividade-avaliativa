#include <stdio.h>

int main() {
    /* declara��o de vari�veis */
    float preco_custo, percentual, preco_venda, acrescimo;

    /* entrada de dados */
    printf("Digite o preco de custo do produto: ");
    scanf("%f", &preco_custo);

    printf("Digite o percentual de acrescimo (exemplo: 20 para 20%%): ");
    scanf("%f", &percentual);

    /* processamento */
    acrescimo = preco_custo * (percentual / 100);
    preco_venda = preco_custo + acrescimo;

    /* sa�da */
    printf("O preco de venda do produto sera: R$ %.2f\n", preco_venda);

    return 0;
}
