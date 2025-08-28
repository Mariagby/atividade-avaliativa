#include <stdio.h>

int main() {
    /* declaração de variáveis */
    int ano_nascimento, ano_atual, idade_atual, idade_2028;

    /* entrada de dados */
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    /* processamento */
    idade_atual = ano_atual - ano_nascimento;
    idade_2028 = 2028 - ano_nascimento;

    /* saída */
    printf("Idade atual: %d anos\n", idade_atual);
    printf("Idade em 2028: %d anos\n", idade_2028);

    return 0;
}
