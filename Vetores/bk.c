#include <stdio.h>

int main()
{
    char lanches[4][20] = {"Rodeio", "Whooper", "Cheddar Duplo", "Big King"};

    printf("---Meus Lanches Favoritos---");

    for (int i = 0; i < 4; i++) {
        printf("\n %s", lanches[i]);
    }

    return 0;
}