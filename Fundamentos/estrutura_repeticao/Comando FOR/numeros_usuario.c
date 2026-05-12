#include <stdio.h>

int main() {
    int numero_inicial = 0;
    int numero_final = 0;

    printf("Escolha um número inicial: ");
    scanf("%i", &numero_inicial);

    printf("Escolha um número final: ");
    scanf("%i", &numero_final); 

    for (int i = numero_inicial; i <= numero_final; i++) {
        printf("\nNúmero %i", i);
    }

    return 0;
}