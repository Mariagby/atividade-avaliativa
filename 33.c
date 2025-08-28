#include <stdio.h>
#include <math.h> // para usar ceil()

int main() {
    /* declaração de variáveis */
    float altura_degrau, altura_desejada;
    int total_degraus;

    /* entrada de dados */
    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura que deseja alcancar (em metros): ");
    scanf("%f", &altura_desejada);

    /* processamento */
    total_degraus = ceil(altura_desejada / altura_degrau);

    /* saída */
    printf("Voce devera subir %d degraus para alcancar essa altura.\n", total_degraus);

    return 0;
}
