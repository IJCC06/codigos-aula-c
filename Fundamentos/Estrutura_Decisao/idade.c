#include <stdio.h>

int main() {
    int idade = 0;

    printf("Qual a sua idade?");
    scanf("%i", &idade);

    if (idade >= 18) {
        printf("Voce e maior de idade. Vai trabalhar vagabundo!");
    } else {
        printf("Voce e menor de idade. Aproveite os seus anos de felicidade!");
    }

    return 0;
}