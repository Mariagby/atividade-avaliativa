#include <stdio.h>
#include <math.h> // para pow()

int main() {
    /* declara��o de vari�veis */
    float peso, altura, imc;

    /* entrada de dados */
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    /* processamento */
    imc = peso / pow(altura, 2);

    /* sa�da */
    printf("O IMC da pessoa e: %.2f\n", imc);

    return 0;
}
