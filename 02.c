#include <stdio.h>
int main (){
    /*declaração de variável*/
    float x,y, resultado;
    /*entrada de dados*/
    printf("entre com o primeiro valor:");
    scanf("%f", &x);
    /*processamento*/
    printf("entre com o segundo valor:");
    scanf("%f", &y);
    resultado=x-y;
    /*saída*/
    printf("A diferenca e: %f", resultado);
    return 0;
    }
