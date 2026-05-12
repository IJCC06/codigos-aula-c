#include <stdio.h>

int main () {
    float nota = 0;
    int faltas = 0;
    int ead = 0;

    printf("Qual a nota do aluno? ");
    scanf("%f", &nota);

    printf("Quantas faltas o aluno teve? ");
    scanf("%i", &faltas);

    printf("Qual a porcentagem do EAD foi concluída? ");
    scanf("%i", &ead);

    if (nota >= 50 && faltas <= 25 && ead == 100) {
        printf("Aprovado! Passou de ano!");
    } else {
        printf("Reprovado! Boa sorte no ano que vem! Hahaha!");
    }
    
    return 0;
}