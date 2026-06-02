#include <stdio.h>
#include <locale.h>

void ola() {
    printf("\n--- Seja Bem-Vindo! ---");
}

void tabuada(int valor, int min, int max) {
    printf("\nTabuada do %i, do %i ao %i", valor, min, max);
    for (int i = min; i <= max; i++) {
        printf("\n%i X %i = %i", valor, i, valor * i);
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int valorTabuada = 0;
    int comecoTabuada = 0;
    int fimTabuada = 0;

    ola();

    printf("\nDigite o valor da tabuada: ");
    scanf("%i", &valorTabuada);

    printf("Digite o começo dessa tabuada: ");
    scanf("%i", &comecoTabuada);

    printf("Digite o fim dessa tabuada: ");
    scanf("%i", &fimTabuada);

    tabuada(valorTabuada, comecoTabuada, fimTabuada);
}