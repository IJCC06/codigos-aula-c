#include <stdio.h>

int main() {
    int quantidade, servico, pagamento, parcelas;
    float valor, total = 0, valor_parcela = 0, total_desconto = 0;
    char avaliacao[20];

    printf("Esses são os nossos serviços:\n");
    printf("1 - Corte\n2 - Pezinho\n3 - Barba\n4 - Luzes\n");

    printf("Quantos serviços serão feitos? ");
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 4) {
        printf("Quantidade inválida.\n");
        return 0;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("\nEscolha o serviço %d: ", i);
        scanf("%d", &servico);

        if (servico >= 1 && servico <= 4) {
            printf("Digite o valor: ");
            scanf("%f", &valor);
            total += valor;
        } else {
            printf("Serviço inválido.\n");
            i--; // repete a escolha
        }
    }

    // Definindo a avaliação
    if (total < 60) {
        sprintf(avaliacao, "Barato");
    } else if (total <= 100) {
        sprintf(avaliacao, "Razoável");
    } else {
        sprintf(avaliacao, "Caro");
    }

    //Definindo a Forma de Pagamento
    printf("\nFormas de Pagamento:\n");
    printf("1 - À vista \n2 - Parcelado");
    printf("\nEscolha sua forma de pagamento: ");
    scanf("%i", &pagamento);

    if (pagamento == 1) {
        total_desconto = total - (total * 0.05);

        // Resultado final organizado
        printf("\n========== RESULTADO ==========\n");
        printf("Pagamento à vista:\n");
        printf("Preço total: R$ %.2f\n", total);
        printf("Preço c/ desconto: R$ %.2f\n", total_desconto);
        printf("Avaliação: %s\n", avaliacao);
        printf("================================\n");
    } else if (pagamento == 2) {
        printf("Quantas parcelas? ");
        scanf("%i", &parcelas);
        valor_parcela = total / parcelas;

        // Resultado final organizado
        printf("\n========== RESULTADO ==========\n");
        printf("Pagamento parcelado:\n");
        printf("Preço total: %ix de R$ %.2f\n", parcelas, valor_parcela);
        printf("Avaliação: %s\n", avaliacao);
        printf("================================\n");
    }

    return 0;
}