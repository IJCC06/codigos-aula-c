#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[50];
    float total_km = 0.0;
    float total_dias = 0.0;
    const float VALOR_KM = 1.25;
    const float VALOR_DIA = 99.50;

    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    printf("Obrigado por nos escolher, %s", nome);

    printf("\nQuantos Km's você irá rodar? ");
    scanf("%i", &km);

    printf("Por quantos dias o carro será usado? ");
    scanf("%i", &dias);

    total_km = km * VALOR_KM;   
    total_dias = dias * VALOR_DIA;

    printf("%s, segue um relatório detalhado", nome);
    printf("\nTotal por Km: R$ %.2f", total_km);
    printf("\nTotal por Dia: R$ %.2f", total_dias);

    if (total_dias < total_km) {
        printf("\nSugerimos o plano por dia!");
    } else {
        printf("\nSugerimos o plano por Km!");
    }

    printf("\nTenha um ótima tarde!");

    return 0;
}