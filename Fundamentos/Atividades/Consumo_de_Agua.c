#include <stdio.h>

int main() {
    int qtDePessoas;
    int idade;
    int consumo_banho;
    int consumo_mensal;
    int consumo_total = 0;

    float valor_conta;
    float valor_final;
    float multa = 0;
    float desconto = 0;

    printf("Digite o número de pessoas: ");
    scanf("%i", &qtDePessoas);

    for(int i = 1; i <= qtDePessoas; i++) {
        printf("Digite a idade da pessoa %i: ", i);
        scanf("%i", &idade);

        if (idade <= 10) {
            consumo_banho = 18;
        } else if (idade >= 11 && idade <= 18) {
            consumo_banho = 30;
        } else if (idade >= 19 && idade <= 25) {
            consumo_banho = 42;
        } else if (idade > 25) {
            consumo_banho = 24;
        }

        consumo_mensal = consumo_banho * 30;
        consumo_total = consumo_total + consumo_mensal;
    }

    valor_conta = consumo_total * 0.05;

    if (consumo_total <= 250) {
        desconto = 50;
        valor_final = valor_conta;

        printf("\n//// RELATÓRIO ////\n");
        printf("Faixa de Consumo: Econômica.\n");
        printf("Total de Pessoas na Residência: %i.\n", qtDePessoas);
        printf("Consumo em litros: %i litros.\n", consumo_total);
        printf("Valor da Conta: R$ %.2f.\n", valor_final);
        printf("Desconto na Próxima Conta: R$ %2.f.\n", desconto);
    } else if (consumo_total <= 400) {
        valor_final = valor_conta;

        printf("//// RELATÓRIO ////\n");
        printf("Faixa de Consumo: Normal.\n");
        printf("Total de Pessoas na Residência: %i.\n", qtDePessoas);
        printf("Consumo em litros: %i litros.\n", consumo_total);
        printf("Valor da Conta: R$ %.2f.\n", valor_final);
    } else if (consumo_total > 400) {
        multa = 150;
        valor_final = valor_conta + multa;

        printf("//// RELATÓRIO ////\n");
        printf("Faixa de Consumo: Excessiva.\n");
        printf("Total de Pessoas na Residência: %i.\n", qtDePessoas);
        printf("Consumo em litros: %i litros.\n", consumo_total);
        printf("Valor da Conta Mensal: R$ %.2f.\n", valor_conta);
        printf("Multa Aplicada: R$ %.2f.\n", multa);
        printf("Valor Final da Conta: R$ %.2f.\n", valor_final);
        printf("/////////////////////");
    }

    return 0;
}