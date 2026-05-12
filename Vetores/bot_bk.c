#include <stdio.h>

int main()
{
    int opcao;
    float preco_total = 0;
    char lanches[4][20] = {"X-Ratão", "X-Barata", "Pé Duplo", "Podre King"};
    float precos[4] = {19.90, 25.90, 29.90, 25.90};

    printf("--- Bem Vindo ao Pará Lanches ---");
    printf("\nConfira nossas opções:");

    do {
        for (int i = 0; i < 4; i++) {
        printf("\n %i. %s: R$ %.2f", i+1, lanches[i], precos[i]);
    }
    printf("\n 0. Finalizar Pedido");

    printf("\nEscolha seu pedido: ");
    scanf("%i", &opcao);

    if (opcao != 0) {
        printf("\nVocê escolheu %s no valor de R$ %.2f", lanches[opcao-1], precos[opcao-1]);
        preco_total += precos[opcao-1];
    }

    } while (opcao != 0);
    printf("\n=== Pedido Finalizado ===");
    printf("\nValor Total: R$ %.2f", preco_total);
    printf("\nVolte Sempre!");

    return 0;
}