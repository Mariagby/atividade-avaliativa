#include <stdio.h>

int main (){
    /*declaração de variáveis*/
    char nome1[50], nome2[50], nome3[50];

    /*entrada de dados*/
    printf("Digite o primeiro nome:");
    scanf("%s", nome1);

    printf("Digite o segundo nome:");
    scanf("%s", nome2);

    printf("Digite o terceiro nome:");
    scanf("%s", nome3);

    /*saída*/
    printf("%s %s\n", nome1, nome3);  // primeira e terceira linha na primeira linha
    printf("%s\n", nome2);           // segunda linha sozinha

    return 0;
}
