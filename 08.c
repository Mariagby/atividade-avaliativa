#include <stdio.h>
int main (){
    /*declara��o de vari�vel*/
    float salario_funcionario, salario_minimo, quantidade;

    /*entrada de dados*/
    printf("Digite o valor do salario do funcionario:");
    scanf("%f", &salario_funcionario);

    printf("Digite o valor do salario minimo:");
    scanf("%f", &salario_minimo);

    /*processamento*/
    quantidade = salario_funcionario / salario_minimo;

    /*sa�da*/
    printf("O funcionario recebe: %.2f salarios minimos", quantidade);

    return 0;
}
