#include <stdio.h>

int main() {
    int dia;
    int trabalhou; // 1 = sim | 0 = não
    int entregas_dia;
    int km_dia;

    int total_dias = 0;
    int total_entregas = 0;
    int total_km = 0;

    float valor_km;
    float valor_entregas;
    float valor_dia;
    float total_valor = 0;
    float media_entregas;
    float media_valor;
    float bonus = 0;

    for (dia = 1; dia <= 7; dia++) {
        printf("Trabalhou neste dia? (1 = Sim / 0 = Não) ");
        scanf("%i", &trabalhou);

        switch (trabalhou) {
            case 0:
                break;
            case 1:
                total_dias++;

                //Entrada dos Dados do Dia
                printf("Digite a Quantidade de Entregas: ");
                scanf("%i", &entregas_dia);
                printf("Digite a Quantidade de Quilômetros: ");
                scanf("%i", &km_dia);

                //Verificação do Valor por Km
                if (km_dia <= 100) {
                    valor_km = km_dia * 0.20;
                } else if (km_dia >= 101 && km_dia <= 200) {
                    valor_km = km_dia * 0.45;
                } else if (km_dia >= 201 && km_dia <= 300) {
                    valor_km = km_dia * 0.80;
                } else if (km_dia > 300) {
                    valor_km = km_dia * 1.05;
                }

                //Verificação do Valor por Entregas
                if (entregas_dia <= 10) {
                    valor_entregas = 7.99;
                } else if (entregas_dia >= 11 && entregas_dia <= 20) {
                    valor_entregas = 16.99;
                } else if (entregas_dia >= 21 && entregas_dia <= 30) {
                    valor_entregas = 28.99;
                } else if (entregas_dia > 30) {
                    valor_entregas = 41.99;
                }

                //Total do Dia
                valor_dia = valor_km + valor_entregas;
                //Acumulação
                total_entregas += entregas_dia;
                total_km += km_dia;
                total_valor += valor_dia;

                //Relatório
                printf("\n/// RELATÓRIO DIÁRIO ///\n");

                switch (dia) {
                    case 1: printf("Segunda-Feira\n"); break;
                    case 2: printf("Terça-Feira\n"); break;
                    case 3: printf("Quarta-Feira\n"); break;
                    case 4: printf("Quinta-Feira\n"); break;
                    case 5: printf("Sexta-Feira\n"); break;
                    case 6: printf("Sábado\n"); break;
                    case 7: printf("Domingo\n"); break;
                }

                printf("Quantidade de Entrega: %i.\n", entregas_dia);
                printf("Quilômetros Percorridos: %i km.\n", km_dia);
                printf("Valor à Receber: R$ %.2f. \n", valor_dia);
                printf("///////////////////////\n \n");
        }
    }

    //Cálculo das Médias
    media_entregas = total_entregas / total_dias;
    media_valor = total_valor / total_dias;

    //Verificação do Bônus
    if (total_dias == 7 && total_km > 200 && media_entregas >= 26 ) {
        bonus = 178.99;
    } else {
        bonus = 0;
    }

    //Relatório Semanal
    printf("/// RELATÓRIO SEMANAL ///\n");
    printf("Total de Dias Trabalhados: %i dias.\n", total_dias);
    printf("Total de Entregas: %i.\n", total_entregas);
    printf("Total de Quilômetros: %i km.\n", total_km);
    printf("Média de Entregas por dia: %.2f.\n", media_entregas);
    printf("Valor Médio por dia: R$ %.2f.\n", media_valor);
    printf("Valor Total à Receber: R$ %.2f.\n", total_valor);
    printf("Bônus Semanal: R$ %.2f.\n", bonus);
    printf("/// FIM ///");

    return 0;
}