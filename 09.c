#include <stdio.h>
#include <math.h>

int main (){
    /*declara��o de vari�vel*/
    int numero;
    float raiz, quadrado;

    /*entrada de dados*/
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    /*processamento*/
    raiz = sqrt(numero);
    quadrado = pow(numero, 2);

    /*sa�da*/
    printf("A raiz quadrada e: %.2f\n", raiz);
    printf("O numero ao quadrado e: %.2f\n", quadrado);

    return 0;
}
