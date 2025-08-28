#include <stdio.h>
#include <math.h>

int main (){
    /*declaração de variáveis*/
    float base_triangulo, altura_triangulo, area_triangulo;
    float lado_quadrado, area_quadrado;
    float raio_circulo, area_circulo;
    float base_maior_trapezio, base_menor_trapezio, altura_trapezio, area_trapezio;
    float base_retangulo, altura_retangulo, area_retangulo;
    float diagonal_maior_losango, diagonal_menor_losango, area_losango;

    /*entrada de dados*/
    // Triângulo
    printf("Digite a base do triangulo:");
    scanf("%f", &base_triangulo);
    printf("Digite a altura do triangulo:");
    scanf("%f", &altura_triangulo);

    // Quadrado
    printf("Digite o lado do quadrado:");
    scanf("%f", &lado_quadrado);

    // Círculo
    printf("Digite o raio do circulo:");
    scanf("%f", &raio_circulo);

    // Trapézio
    printf("Digite a base maior do trapezio:");
    scanf("%f", &base_maior_trapezio);
    printf("Digite a base menor do trapezio:");
    scanf("%f", &base_menor_trapezio);
    printf("Digite a altura do trapezio:");
    scanf("%f", &altura_trapezio);

    // Retângulo
    printf("Digite a base do retangulo:");
    scanf("%f", &base_retangulo);
    printf("Digite a altura do retangulo:");
    scanf("%f", &altura_retangulo);

    // Losango
    printf("Digite a diagonal maior do losango:");
    scanf("%f", &diagonal_maior_losango);
    printf("Digite a diagonal menor do losango:");
    scanf("%f", &diagonal_menor_losango);

    /*processamento*/
    area_triangulo = (base_triangulo * altura_triangulo) / 2;
    area_quadrado = lado_quadrado * lado_quadrado;
    area_circulo = 3.14159 * pow(raio_circulo, 2);
    area_trapezio = ((base_maior_trapezio + base_menor_trapezio) * altura_trapezio) / 2;
    area_retangulo = base_retangulo * altura_retangulo;
    area_losango = (diagonal_maior_losango * diagonal_menor_losango) / 2;

    /*saída*/
    printf("\nArea do triangulo: %.2f", area_triangulo);
    printf("\nArea do quadrado: %.2f", area_quadrado);
    printf("\nArea do circulo: %.2f", area_circulo);
    printf("\nArea do trapezio: %.2f", area_trapezio);
    printf("\nArea do retangulo: %.2f", area_retangulo);
    printf("\nArea do losango: %.2f", area_losango);

    return 0;
}
