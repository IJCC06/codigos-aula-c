#include <stdio.h>

int main()
{
    float notas[] = {5.6, 1.2, 8.9, 9,7};

    for (int i = 0; i < 4; i++) {
        printf("\nNota: %.2f", notas[i]);
    }

    return 0;
}