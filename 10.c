#include <stdio.h>

int main (){
    /*declaração de variável*/
    float diagonal, area;

    /*entrada de dados*/
    printf("Digite o valor da diagonal do quadrado:");
    scanf("%f", &diagonal);

    /*processamento*/
    area = (diagonal * diagonal) / 2;

    /*saída*/
    printf("A area do quadrado e: %.2f", area);

    return 0;
}
