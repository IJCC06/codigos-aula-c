#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 1000) {
        printf("\nNúmero %i é ímpar", contador);
        contador += 2;
    }
}