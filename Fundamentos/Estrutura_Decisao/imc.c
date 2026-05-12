#include <stdio.h>

int main() {
    float peso = 0;
    float altura = 0;

    printf("Qual o seu peso? ");
    scanf("%f", &peso);

    printf("Qual a sua altura? ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Seu IMC e de %.2f.\n", imc);
        printf("Voce esta abaixo do peso.");
    } if (imc >= 18.5 && imc < 25) {
        printf("Seu IMC e de %.2f.\n", imc);
        printf("Voce esta no peso normal.");
    } if (imc >= 25 && imc < 30) {
        printf("Seu IMC e de %.2f.\n", imc);
        printf("Voce esta em sobrepeso.");
    } if (imc > 30) {
        printf("Seu IMC e de %.2f.\n", imc);
        printf("VOCE E OBESO! VAI SE EXERCITAR!");
    }

    return 0;
}