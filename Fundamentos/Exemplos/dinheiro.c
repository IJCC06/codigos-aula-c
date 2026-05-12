#include <stdio.h>
#include <math.h>

int main() {
    //Entrada
    float salario = 0;
    const float juros = 0.068;
    int tempo = 0;
    const float porcentagem_investida = 0.25;

    printf("Qual é o valor do seu salário?");
    scanf("%f", &salario);

    printf("Qual é o período de investimento?");
    scanf("%i", &tempo);

    //Processamento
    float capital_mensal = salario * porcentagem_investida;
    float capital = capital_mensal * tempo;
    float juros_totais = tempo * juros;
    float valor_juros = capital * juros_totais;
    float montante = capital + valor_juros;

    //Saída
    printf("\nInvestindo R$ %.2f por %i meses: \n", capital_mensal, tempo);
    printf("O valor total investido é de R$ %.2f. \n", capital);
    printf("O total de juros é de R$ %.2f. \n", valor_juros);
    printf("O Montante será R$ %.2f. \n", montante);

    return 0;
}