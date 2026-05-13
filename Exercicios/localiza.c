#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[50];
    char carro[50];
    float total_km = 0.0;
    float total_dias = 0.0;
    const float VALOR_KM = 1.25;
    const float VALOR_DIA = 99.50;
    const char cupons[3][30] = {
        "GMC_10", "GMC_20", "GMC_30"
    };
    char cupomCliente[30];
    int temCupom = 0;
    float valorDesconto = 0;

    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    printf("Obrigado por nos escolher, %s", nome);

    printf("\nQual o nome do carro? ");
    scanf("%s", carro);

    printf("Quantos Km's você irá rodar? ");
    scanf("%i", &km);

    printf("Por quantos dias o carro será usado? ");
    scanf("%i", &dias);

    printf("Tem cupom de desconto? (1 - Sim; 0 - Não) ");
    scanf("%i", &temCupom);

    if (temCupom == 1) {
        printf("Digite o código: ");
        scanf("%s", cupomCliente);

        for (int i = 0; i < 3; i++) {
            if (strcmp(cupomCliente, "GMC_10") == 0) {
                valorDesconto = 10;
            } else if (strcmp(cupomCliente, "GMC_20") == 0) {
                valorDesconto = 20;
            } else if (strcmp(cupomCliente, "GMC_30") == 0) {
                valorDesconto = 30;
            }
        }
    }

    total_km = (km * VALOR_KM) - valorDesconto;   
    total_dias = (dias * VALOR_DIA) - valorDesconto;

    printf("\n%s, segue um relatório detalhado:", nome);
    printf("\nCarro: %s", carro);
    printf("\nTotal por Km: R$ %.2f", total_km);
    printf("\nTotal por Dia: R$ %.2f", total_dias);

    if (temCupom == 1) {
        printf("\nVocê teve desconto de R$ %.2f", valorDesconto);
    }

    if (total_dias < total_km) {
        printf("\nSugerimos o plano por dia!");
    } else {
        printf("\nSugerimos o plano por Km!");
    }

    printf("\nTenha um ótima tarde!");
    printf("\n--- Este programa foi desenvolvido por Gabriel Menegon Cassano ---");

    return 0;
}