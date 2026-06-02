#include <stdio.h>
#include <locale.h>

void ola() {
    printf("--- Seja Bem-Vindo! ---");
}

void calcularMedia(float n1, float n2) {
    float media = (n1 + n2) / 2;
    printf("\nA média é: %.2f", media);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float n1 = 0;
    float n2 = 0;

    ola();

    printf("\nDigite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    calcularMedia(n1, n2);

    return 0;
}