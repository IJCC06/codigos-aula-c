#include <stdio.h>

int main () {
    //Entrada
    float valor_carro = 0;
    int parcelas = 0;
    const float entrada = 0.3;

    printf("Qual é o valor do carro?");
    scanf("%f", &valor_carro);

    printf("Em quantas parcelas será pago?");
    scanf("%i", &parcelas);

    //Processamento
    float valor_entrada = valor_carro * entrada;
    float valor_a_pagar = valor_carro - valor_entrada;
    float valor_parcelas = valor_a_pagar / parcelas;

    //Saída
    printf("\nSendo o valor do carro R$ %.2f e que será pago em %i parcelas:\n", valor_carro, parcelas);
    printf("O valor da entrada será de R$ %.2f \n", valor_entrada);
    printf("O valor das parcelas será de R$ %.2f \n", valor_parcelas);

    return 0;
}