#include <stdio.h>

int main (){
    /*declara��o de vari�vel*/
    float salario, imposto;

    /*entrada de dados*/
    printf("Digite o salario do funcionario:");
    scanf("%f", &salario);

    /*processamento*/
    imposto = salario * 0.05;

    /*sa�da*/
    printf("O valor do imposto de renda e: %.2f", imposto);

    return 0;
}
