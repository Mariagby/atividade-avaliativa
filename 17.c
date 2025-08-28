#include <stdio.h>

int main (){
    /*declaração de variáveis*/
    int quantidade1, quantidade2, quantidade3;
    float valor1, valor2, valor3, total;

    /*entrada de dados*/
    printf("Digite a quantidade e o valor do primeiro produto:");
    scanf("%d %f", &quantidade1, &valor1);

    printf("Digite a quantidade e o valor do segundo produto:");
    scanf("%d %f", &quantidade2, &valor2);

    printf("Digite a quantidade e o valor do terceiro produto:");
    scanf("%d %f", &quantidade3, &valor3);

    /*processamento*/
    total = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);

    /*saída*/
    printf("O valor total da compra e: %.2f\n", total);

    return 0;
}
