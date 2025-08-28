#include <stdio.h>

int main() {
    /* declaração de variáveis */
    int total_eleitores, votos1, votos2, votos_nulos;
    float perc1, perc2, perc_nulos;

    /* entrada de dados */
    printf("Digite o total de eleitores: ");
    scanf("%d", &total_eleitores);

    printf("Digite o numero de votos do primeiro candidato: ");
    scanf("%d", &votos1);

    printf("Digite o numero de votos do segundo candidato: ");
    scanf("%d", &votos2);

    /* processamento */
    votos_nulos = total_eleitores - (votos1 + votos2);

    perc1 = (votos1 * 100.0) / total_eleitores;
    perc2 = (votos2 * 100.0) / total_eleitores;
    perc_nulos = (votos_nulos * 100.0) / total_eleitores;

    /* saída */
    printf("\nPercentual de votos do primeiro candidato: %.2f%%\n", perc1);
    printf("Percentual de votos do segundo candidato: %.2f%%\n", perc2);
    printf("Percentual de votos nulos: %.2f%%\n", perc_nulos);

    return 0;
}
