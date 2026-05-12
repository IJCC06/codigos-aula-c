#include <stdio.h>
#include <stdbool.h>

int main() {
    bool ingresso_antes = false;
    bool ingresso_naHora = false;
    int comprou = 0;

    printf("Comprou o ingresso antes? \n0 - Não \n1 - Sim");
    printf("\nEscolha: ");
    scanf("%d", &comprou);

    ingresso_antes = comprou;

    printf("Comprou o ingresso na hora? \n0 - Não \n1 - Sim");
    printf("\nEscolha: ");
    scanf("%d", &comprou);

    ingresso_naHora = comprou;

    if (ingresso_antes == 1 || ingresso_naHora == 1) {
        printf("Vai assitir o show!");
    } else {
        printf("Não vai assitir o show.");
    }

    return 0;
}