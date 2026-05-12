#include <stdio.h>

int main() {
    int i = 0;
    int res = 0;
    int tabuada = 4;
    printf("Tabuada:");

    while (i <= 10) {
        res = i * tabuada;
        printf("\n%i X %i = %i", tabuada, i, res);
        i++;
    }

    return 0;
}