#include <stdio.h>

int main (){
    /*declaração de variáveis*/
    int A, B, C, temp;

    /*entrada de dados*/
    printf("Digite o valor de A:");
    scanf("%d", &A);

    printf("Digite o valor de B:");
    scanf("%d", &B);

    printf("Digite o valor de C:");
    scanf("%d", &C);

    /*processamento*/
    temp = A;   // guarda o valor original de A
    A = B;      // A recebe valor de B
    B = C;      // B recebe valor de C
    C = temp;   // C recebe valor original de A

    /*saída*/
    printf("Valores apos a troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
