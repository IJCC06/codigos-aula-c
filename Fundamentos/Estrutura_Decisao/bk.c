#include <stdio.h>

int main() {
    //Declaração
    float lanche = 0;
    float batata = 0;
    float refri = 0;
    float sobremesa = 0;

    //Valor do Lanche
    printf("Qual o valor do lanche? ");
    scanf("%f", &lanche);
    //Valor da Batata
    printf("Qual o valor da batata? ");
    scanf("%f", &batata);
    //Valor do Refri
    printf("Qual o valor do refri? ");
    scanf("%f", &refri);
    //Valor da Sobremesa
    printf("Qual o valor da sobremesa? ");
    scanf("%f", &sobremesa);

    //Análise do Preço
    float valor_total = lanche + batata + refri + sobremesa;
    if (valor_total < 40) {
        printf("O valor de R$ %.2f ficou barato.\n", valor_total);
    } else if (valor_total >= 40 && valor_total <= 55) {
        printf("O valor de R$ %.2f é razoavel.\n", valor_total);
    } else if (valor_total > 55) {
        printf("O valor de R$ %.2f é caro.\n", valor_total);
    }
    
    return 0;
}