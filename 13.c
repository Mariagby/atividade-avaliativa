#include <stdio.h>

int main (){
    /*declaração de variáveis*/
    float salario_minimo, valor_kw, quantidade_kw, valor_total, valor_com_desconto;

    /*entrada de dados*/
    printf("Digite o valor do salario minimo:");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de kilowatts consumidos:");
    scanf("%f", &quantidade_kw);

    /*processamento*/
    valor_kw = salario_minimo / 5;
    valor_total = valor_kw * quantidade_kw;
    valor_com_desconto = valor_total - (valor_total * 0.15);

    /*saída*/
    printf("Valor de cada kilowatt: %.2f\n", valor_kw);
    printf("Valor total a ser pago: %.2f\n", valor_total);
    printf("Valor com 15%% de desconto: %.2f\n", valor_com_desconto);

    return 0;
}
