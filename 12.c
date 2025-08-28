#include <stdio.h>

int main (){
    /*declaração de variável*/
    float salario_atual, novo_salario;

    /*entrada de dados*/
    printf("Digite o salario atual do funcionario:");
    scanf("%f", &salario_atual);

    /*processamento*/
    novo_salario = salario_atual + (salario_atual * 0.25);

    /*saída*/
    printf("O novo salario com aumento de 25%% e: %.2f", novo_salario);

    return 0;
}
