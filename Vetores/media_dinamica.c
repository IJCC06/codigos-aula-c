#include <stdio.h>

int main()
{
    int qtdDeNotas;
    float soma = 0;
    float media = 0;

    printf("Quantas notas serão medidas? ");
    scanf("%i", &qtdDeNotas);

    float notas[qtdDeNotas];

    for (int i = 1; i <= qtdDeNotas; i++) {
        printf("Nota %i: ", i);
        scanf("%f", &notas[i-1]);
    }

    for (int i = 0; i < qtdDeNotas; i++) {
        soma = soma + notas[i];
    }

    media = soma / qtdDeNotas;

    printf("Sua média é %.2f", media);

    return 0;
}