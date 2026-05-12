#include <stdio.h>

int main() {
    int dia = 0;

    printf("Qual o dia da semana (dom-> 0, sab-> 6)? ");
    scanf("%i", &dia);

    if (dia == 0) {
        printf("Hoje é Domingo, pé de cachimbo...");
    } else if (dia == 1) {
        printf("Segundou, bora trabalhar!");
    } else if (dia == 2) {
        printf("Terçou! Bora, bora, que só começou a semana!");
    } else if (dia == 3) {
        printf("Quarta! Força que já é meio caminho andado!");
    } else if (dia == 4) {
        printf("Quinta! Mais um pouquinho já acaba!");
    } else if (dia == 5) {
        printf("Sextou! Acabou, finalmente!");
    } else if (dia == 6) {
        printf("Sábado! Vamos descansar!");
    } else {
        printf("Para de ser burro e coloca um dia de verdade!");
    }

    return 0;
}