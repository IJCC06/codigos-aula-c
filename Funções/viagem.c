#include <stdio.h>
#include <locale.h>

void ola() {
    printf("\n--- Seja Bem-Vindo! ---");
}

void viagem(int km, float precoGasolina, float precoEtanol, float consumoGasolina, float consumoEtanol) {
    float consumoLitrosGasolina = km / consumoGasolina;
    float consumoLitrosEtanol = km / consumoEtanol;

    float valorGasolina = consumoLitrosGasolina * precoGasolina;
    float valorEtanol = consumoLitrosEtanol * precoEtanol;

    printf("\n<----> Valores Totais <---->");
    printf("\nDistância = %i km\n", km);

    printf("\n---Valores na Gasolina---");
    printf("\nConsumo = %.2f km/L", consumoGasolina);
    printf("\nLitros Consumidos = %.2f L", consumoLitrosGasolina);
    printf("\nPreço Total = R$ %.2f\n", valorGasolina);

    printf("\n---Valores no Etanol---");
    printf("\nConsumo = %.2f km/L", consumoEtanol);
    printf("\nLitros Consumidos = %.2f L", consumoLitrosEtanol);
    printf("\nPreço Total = R$ %.2f", valorEtanol);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    float precoGasolina = 0;
    float precoEtanol = 0;
    float consumoGasolina = 0;
    float consumoEtanol = 0;

    ola();

    printf("\nDigite a distância da viagem (em km): ");
    scanf("%i", &km);

    printf("Digite o preço do litro da Gasolina: ");
    scanf("%f", &precoGasolina);

    printf("Digite o preço do litro do Etanol: ");
    scanf("%f", &precoEtanol);

    printf("Digite o consumo de Gasolina do seu veículo (em km/L): ");
    scanf("%f", &consumoGasolina);

    printf("Digite o consumo de Etanol do seu veículo (em km/L): ");
    scanf("%f", &consumoEtanol);

    viagem(km, precoGasolina, precoEtanol, consumoGasolina, consumoEtanol);
}