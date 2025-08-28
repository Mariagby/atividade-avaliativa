#include <stdio.h>

int main (){
    /*declaração de variáveis*/
    float p1, p2, p3, p4, p5;
    float soma, pagamento, troco;

    /*entrada de dados*/
    printf("Digite o valor do primeiro produto:");
    scanf("%f", &p1);

    printf("Digite o valor do segundo produto:");
    scanf("%f", &p2);

    printf("Digite o valor do terceiro produto:");
    scanf("%f", &p3);

    printf("Digite o valor do quarto produto:");
    scanf("%f", &p4);

    printf("Digite o valor do quinto produto:");
    scanf("%f", &p5);

    /*processamento*/
    soma = p1 + p2 + p3 + p4 + p5;

    printf("Digite o valor pago pelo cliente:");
    scanf("%f", &pagamento);

    troco = pagamento - soma;

    /*saída*/
    printf("Valor total da compra: R$ %.2f\n", soma);
    printf("Troco a ser devolvido: R$ %.2f\n", troco);

   return 0;
}
