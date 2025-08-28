include <stdio.h>

int main (){
    /*declaração de variáveis*/
    float valor_original, valor_desconto, valor_final;

    /*entrada de dados*/
    printf("Digite o valor do produto:");
    scanf("%f", &valor_original);

    /*processamento*/
    valor_desconto = valor_original * 0.09;
    valor_final = valor_original - valor_desconto;

    /*saída*/
    printf("Valor com 9%% de desconto: R$ %.2f\n", valor_final);

    return 0;
}
