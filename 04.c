#include <stdio.h>
int main (){
    /*declara��o de vari�vel*/
    float nota1, nota2, nota3, media;

    /*entrada de dados*/
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:");
    scanf("%f", &nota3);

    /*processamento*/
    media = (nota1 + nota2 + nota3) / 3;

    /*sa�da*/
    printf("A media aritmetica e: %f", media);

    return 0;
}
