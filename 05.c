#include <stdio.h>
int main (){
    /*declaração de variável*/
    float nota1, nota2, peso1, peso2, media_ponderada;

    /*entrada de dados*/
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite o peso da primeira nota:");
    scanf("%f", &peso1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    printf("Digite o peso da segunda nota:");
    scanf("%f", &peso2);

    /*processamento*/
    media_ponderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

    /*saída*/
    printf("A media ponderada e: %f", media_ponderada);

    return 0;
}
