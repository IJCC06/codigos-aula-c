#include <stdio.h>

int main () {
    int dia = 0;

    printf("Dias da Semana:\n");
    printf("1 - Domingo\n7 - Sábado\n");
    printf("Escolha: ");
    scanf("%i", dia);

    switch (dia) {
        case 1:
            printf("\nDomingou!");
            break;
        case 2:
            printf("\nSegundou!");
            break;
        case 3:
            printf("\nTerça!");
            break;
        case 4:
            printf("\nQuarta, já é meio caminho andado!");
            break;
        case 5:
            printf("\nQuinta, só mais um pouco!");
            break;
        case 6:
            printf("\nSextou!");
            break;
        case 7:
            printf("\nSabadão!");
            break;
        default:
            printf("\nBota um dia da semana animal!");
            break;
    }

    return 0;
}