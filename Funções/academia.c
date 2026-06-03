#include <stdio.h>
#include <locale.h>

void analise(int meses) {
    char academias[3][20] = {"Viva Saúde", "Saúde em Dia", "Fitness Pro"};
    float planoMensal[3] = {49.99, 59.99, 69.99};
    float planoAnual[3] = {479.88, 587.88, 707.88};
    float valorTotal[3];
    float valorPorDia[3];
    int diasPorSem[3] = {3, 4, 7};
    int diasPorMes[3] = {12, 16, 30};

    for(int i = 0; i < 3; i++) {
        valorTotal[i] = planoMensal[i] * meses;
        valorPorDia[i] = valorTotal[i] / (diasPorMes[i] * meses);
    }

    for(int i = 0; i < 3; i++) {
        printf("\n---%s---", academias[i]);
        printf("\nValor Total (Plano Mensal) = R$ %.2f", valorTotal[i]);
        printf("\nValor Total (Plano Anual) = R$ %.2f", planoAnual[i]);
        printf("\nDias Disponíveis por Semana = %i dias", diasPorSem[i]);
        printf("\nValor por Dia Disponível = R$ %.2f\n", valorPorDia[i]);
    }

    printf("\n---Análise---");
    printf("\nAcademia Recomendada: ");
    if(valorPorDia[0] < valorPorDia[1] && valorPorDia[0] < valorPorDia[2]) {
        printf("%s", academias[0]);
        
        printf("\nPlano Recomendado: ");
        if(valorTotal[0] < planoAnual[0]) {
            printf("Plano Mensal");
        } else if(valorTotal[0] > planoAnual[0]) {
            printf("Plano Anual");
        }
    } else if(valorPorDia[1] < valorPorDia[0] && valorPorDia[1] < valorPorDia[2]) {
        printf("%s", academias[1]);

        printf("\nPlano Recomendado: ");
        if(valorTotal[1] < planoAnual[1]) {
            printf("Plano Mensal");
        } else if(valorTotal[1] > planoAnual[1]) {
            printf("Plano Anual");
        }
    } else if(valorPorDia[2] < valorPorDia[0] && valorPorDia[2] < valorPorDia[1]) {
        printf("%s", academias[2]);

        printf("\nPlano Recomendado: ");
        if(valorTotal[2] < planoAnual[2]) {
            printf("Plano Mensal");
        } else if(valorTotal[2] > planoAnual[2]) {
            printf("Plano Anual");
        }
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int meses = 0;

    printf("---Seja Bem-Vindo---");
    printf("\nVamos analisar qual academia é mais vantajosa!");
    printf("\nDigite a quantidade de meses para a assinatura: ");
    scanf("%i", &meses);

    analise(meses);

    return 0;
}