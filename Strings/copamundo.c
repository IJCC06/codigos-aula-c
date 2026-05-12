#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char grupoBrasil[4][30];
    int resultados[3][2];
    int totalBrasil = 0;

    printf("-- Vamos preencher o grupo do Brasil na Copa --\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Seleção %i: ", i+1);
        scanf(" %[^\n]", grupoBrasil[i]);
    }

    printf("\n--- Resultados dos Jogos ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Partida %i: %s X %s = ", i+1, grupoBrasil[0], grupoBrasil[i+1]);
        scanf("%i %i", &resultados[i][0], &resultados[i][1]);
    }

    printf("\n--- Resultados Finais ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\n%s %i x %i %s",
            grupoBrasil[0],
            resultados[i][0],
            resultados[i][1],
            grupoBrasil[i+1]
        );

        if (resultados[i][0] > resultados[i][1]) {
            totalBrasil += 3;
        } else if (resultados[i][0] == resultados[i][1]) {
            totalBrasil += 1;
        }
    }

    printf("\nO Brasil fez %i pontos", totalBrasil);

    return 0;
}