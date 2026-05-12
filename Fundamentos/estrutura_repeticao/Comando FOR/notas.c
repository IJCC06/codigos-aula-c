#include <stdio.h>

int main () {
    printf("Vamos calcular as notas do aluno:\n");

    int qtdeNotas = 0;
    float nota = 0;
    float totalNotas = 0;
    float mediaFinal = 0;

    printf("Quantas notas deseja calcular? ");
    scanf("%i", &qtdeNotas);

    for (int i = 0; i < qtdeNotas; i++) {
        printf("Qual a nota do aluno? ");
        scanf("%f", &nota);

        totalNotas = totalNotas + nota;
    }

    mediaFinal = totalNotas / qtdeNotas;

    printf("A média final é %.2f", mediaFinal);

    if (mediaFinal >= 6) {
        printf("\nAprovado!");
    } else {
        printf("\nReprovado!");
    }

    return 0;
}