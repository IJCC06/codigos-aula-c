#include <stdio.h>

int main() {
    int tabuada = 0;
    int res = 0;

    do {
        printf("Escolha a tabuada ou pressione 0 para sair: ");
        scanf("%i", &tabuada);

        for (int t = 0; t <= 10; t++) {
            res = tabuada * t;
            printf("\n%i X %i = %i", tabuada, t, res);
        }
    } while (tabuada != 0);
    printf("Fim.");

    return 0;
}