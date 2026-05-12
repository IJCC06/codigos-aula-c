#include <stdio.h>

int main() {
    float nota = 0;

    printf("Qual a sua nota?");
    scanf("%f", &nota);

    if (nota > 6.9) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}