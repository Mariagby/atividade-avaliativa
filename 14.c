#include <stdio.h>

int main (){
    /*declaração de variáveis*/
    int peso_kg;
    float peso_gramas, novo_peso_gramas;

    /*entrada de dados*/
    printf("Digite o peso da pessoa (em kg):");
    scanf("%d", &peso_kg);

    /*processamento*/
    peso_gramas = peso_kg * 1000;
    novo_peso_gramas = peso_gramas + (peso_gramas * 0.05);

    /*saída*/
    printf("Peso em gramas: %.2f\n", peso_gramas);
    printf("Novo peso com 5%% de aumento: %.2f gramas\n", novo_peso_gramas);

    return 0;
}
