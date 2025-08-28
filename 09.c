#include <stdio.h>
#include <math.h>

int main (){
    /*declaração de variável*/
    int numero;
    float raiz, quadrado;

    /*entrada de dados*/
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    /*processamento*/
    raiz = sqrt(numero);
    quadrado = pow(numero, 2);

    /*saída*/
    printf("A raiz quadrada e: %.2f\n", raiz);
    printf("O numero ao quadrado e: %.2f\n", quadrado);

    return 0;
}
