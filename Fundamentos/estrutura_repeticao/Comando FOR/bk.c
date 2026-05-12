#include <stdio.h>

int main() {
    //Declaração
    float lanche = 0;
    float batata = 0;
    float refri = 0;
    float sobremesa = 0;
    float valor_total = 0;
    int qtdeAmigos = 0;
    float valorporPessoa = 0;

    printf("Quantos amigos foram ao rolê? ");
    scanf("%i", &qtdeAmigos);

    for (int a = 0; a < qtdeAmigos; a++) {
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

        valor_total = lanche + batata + refri + sobremesa;
    }

    valorporPessoa = valor_total / qtdeAmigos;

    if (valorporPessoa > 48.90) {
        printf("O total foi de R$ %.2f\n", valor_total);
        printf("Você pagará tudo!");
    } else {
        printf("O total foi de R$ %2.f\n", valor_total);
        printf("Cada pessoa pagará R$ %.2f", valorporPessoa);
    }

    return 0;
}