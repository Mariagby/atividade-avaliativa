#include <stdio.h>

int main() {
    /* declara��o de vari�veis */
    float tempo, velocidade, distancia, combustivel;

    /* entrada de dados */
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade media durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    /* processamento */
    distancia = tempo * velocidade;
    combustivel = distancia / 12;

    /* sa�da */
    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Combustivel gasto: %.2f litros\n", combustivel);

    return 0;
}
