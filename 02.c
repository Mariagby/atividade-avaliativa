#include <stdio.h>
int main (){
    /*declara��o de vari�vel*/
    float x,y, resultado;
    /*entrada de dados*/
    printf("entre com o primeiro valor:");
    scanf("%f", &x);
    /*processamento*/
    printf("entre com o segundo valor:");
    scanf("%f", &y);
    resultado=x-y;
    /*sa�da*/
    printf("A diferenca e: %f", resultado);
    return 0;
    }
