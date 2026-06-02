#include <stdio.h>
#include <locale.h>

void ola() {
    printf("\n--- Seja Bem-Vindo! ---");
}

void calculadora(float n1, float n2, int operador) {
    printf("\n--- Conta ---\n");
    switch (operador) {
    case 1: printf("%.2f + %.2f = %.2f", n1, n2, (n1 + n2)); break;
    case 2: printf("%.2f - %.2f = %.2f", n1, n2, (n1 - n2)); break;
    case 3: printf("%.2f X %.2f = %.2f", n1, n2, (n1 * n2)); break;
    case 4: printf("%.2f / %.2f = %.2f", n1, n2, (n1 / n2)); break;
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int operador = 0;
    float n1 = 0;
    float n2 = 0;

    ola();

    printf("\nDigite o primeiro número: ");
    scanf("%f", &n1);

    printf("Operadores:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão");
    printf("\nDigite a operação: ");
    scanf("%i", &operador);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    calculadora(n1, n2, operador);
}