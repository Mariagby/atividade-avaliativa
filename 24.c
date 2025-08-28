#include <stdio.h>
#include <math.h> // para pow()

int main (){
    /*declaração de variáveis*/
    float P, i, valor_acumulado;
    int n;

    /*entrada de dados*/
    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &P);

    printf("Digite a taxa mensal (ex: 0.01 para 1%%): ");
    scanf("%f", &i);

    printf("Digite o numero de meses (n): ");
    scanf("%d", &n);

    /*processamento*/
    valor_acumulado = (P * (pow(1 + i, n) - 1)) / i;

    /*saída*/
    printf("O valor acumulado apos %d meses e: R$ %.2f\n", n, valor_acumulado);

    return 0;
}
