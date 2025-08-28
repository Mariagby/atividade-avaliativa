#include <stdio.h>
int main (){

    /*declaração de variável*/
    int x,y, divisao=0;

    /*entrada de dados*/
    printf("entre com o primeiro valor:");
    scanf("%d", &x);

    /*processamento*/
    printf("entre com o segundo valor:");
    scanf("%d", &y);
    divisao=x/y;

    /*saída*/
    printf("O quociente e: %d", divisao);

    return 0;
    }
