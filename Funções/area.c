#include <stdio.h>
#include <locale.h>

void ola() {
    printf("\n--- Seja Bem-Vindo! ---");
}

void areaFiguras(float lado, float raio) {
    float areaQuadrado = lado * lado;
    printf("\nA área do Quadrado é %.2f cm²", areaQuadrado);

    float areaCirculo = 3.14 * raio * raio;
    printf("\nA área do Círculo é %.2f cm²", areaCirculo);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float lado = 0;
    float raio = 0;

    ola();

    printf("\nVamos começar pelo Quadrado!");
    
    printf("\nDigite o lado (em cm): ");
    scanf("%f", &lado);

    printf("\nVamos para o Círculo!");

    printf("\nDigite o raio (em cm): ");
    scanf("%f", &raio);

    printf("\n--- Resultados ---");
    areaFiguras(lado, raio);
}