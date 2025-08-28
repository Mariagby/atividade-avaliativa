#include <stdio.h>

int main() {
    /* declara��o de vari�veis */
    float a, b, c, d, e, f;
    float denominador, x, y;

    /* entrada de dados */
    printf("Digite os coeficientes a, b e c da primeira equacao: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Digite os coeficientes d, e e f da segunda equacao: ");
    scanf("%f %f %f", &d, &e, &f);

    /* c�lculo do denominador */
    denominador = a * e - b * d;

    if (denominador == 0) {
        printf("O sistema nao possui solucao unica.\n");
    } else {
        /* c�lculo de x e y */
        x = (c * e - b * f) / denominador;
        y = (a * f - c * d) / denominador;

        /* sa�da */
        printf("Valor de x: %.2f\n", x);
        printf("Valor de y: %.2f\n", y);
    }

    return 0;
}
