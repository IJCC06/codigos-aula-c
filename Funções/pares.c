#include <stdio.h>
#include <locale.h>

void ola() {
    printf("\n--- Seja Bem-Vindo! ---");
}

void pares(int inferior, int superior) {
    printf("\nNúmeros Pares entre %i e %i", inferior, superior);
    for (int i = inferior; i <= superior; i++) {
        if (i % 2 == 0) {
            printf("\n%i", i);
        }
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int inferior = 0;
    int superior = 0;

    ola();

    printf("\nDigite o valor mínimo: ");
    scanf("%i", &inferior);

    printf("Digite o valor máximo: ");
    scanf("%i", &superior);

    pares(inferior, superior);
}