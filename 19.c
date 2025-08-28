#include <stdio.h>

int main (){
    /*declaração de variáveis*/
    int valor1, valor2, valor3;
    int soma;
    float media;
    int resto1, resto2, resto3;

    /*entrada de dados*/
    printf("Digite o primeiro valor:");
    scanf("%d", &valor1);

    printf("Digite o segundo valor:");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor:");
    scanf("%d", &valor3);

    /*processamento*/
    soma = valor1 + valor2 + valor3;
    media = soma / 3.0;

    resto1 = soma % valor1;
    resto2 = soma % valor2;
    resto3 = soma % valor3;

    /*saída*/
    printf("Somatorio: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Resto da divisao do somatorio por %d: %d\n", valor1, resto1);
    printf("Resto da divisao do somatorio por %d: %d\n", valor2, resto2);
    printf("Resto da divisao do somatorio por %d: %d\n", valor3, resto3);

    return 0;
}
