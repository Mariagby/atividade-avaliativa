#include <stdio.h>

int main (){
    /*declara��o de vari�veis*/
    float largura, comprimento, area;

    /*entrada de dados*/
    printf("Digite a largura do lote:");
    scanf("%f", &largura);

    printf("Digite o comprimento do lote:");
    scanf("%f", &comprimento);

    /*processamento*/
    area = largura * comprimento;

    /*sa�da*/
    printf("A area total do lote e: %.2f metros quadrados\n", area);

    return 0;
}
