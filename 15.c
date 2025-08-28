#include <stdio.h>

int main (){
    /*declaração de variáveis*/
    int ano_nascimento, ano_atual, idade;
    int idade_semanas;

    /*entrada de dados*/
    printf("Digite o ano de nascimento:");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual:");
    scanf("%d", &ano_atual);

    /*processamento*/
    idade = ano_atual - ano_nascimento;
    idade_semanas = idade * 52;

    /*saída*/
    printf("Idade: %d anos\n", idade);
    printf("Idade em semanas: %d semanas\n", idade_semanas);

    return 0;
}
