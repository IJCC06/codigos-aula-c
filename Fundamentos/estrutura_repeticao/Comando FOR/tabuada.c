#include <stdio.h>

int main() {
    int tabuada = 0;

    printf("Escolha uma tabuada: ");
    scanf("%i", &tabuada);

    for (int t = 0; t <= tabuada * 10; t += tabuada) {
        printf("\n%i X %i = %i", tabuada, t / tabuada, t);
    }

    return 0;
}