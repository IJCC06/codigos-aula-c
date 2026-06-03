#include <stdio.h>
#include <locale.h>
#include <string.h>

void orcamento(char componentes[][30], float precos[], int opcoes[], int qtdeComponentes, int pessoas, int parcelas, int opcao_pagamento) {
    // Contagem de Componentes Comprados
    int contador = 0;
    for (int i = 0; i < qtdeComponentes; i++) {
        if (opcoes[i] == 1) {
            contador++;
        }
    }

    // Custo Total
    float valor_total = 0;
    for(int i = 0; i < qtdeComponentes; i++) {
        valor_total += precos[i];
    }

    // Tela Final
    printf("\n----ORÇAMENTO----");
    printf("\nComponentes Comprados: %i itens", contador);
    printf("\nPreços Unitários:");
    for(int i = 0; i < qtdeComponentes; i++) {
        if(opcoes[i] == 1) {
            printf("\n---%s = R$ %.2f", componentes[i], precos[i]);
        }
    }
    printf("\nValor Total = R$ %.2f\n", valor_total);
    
    // Seleção da Forma de Pagamento
    switch(opcao_pagamento) {
        // À Vista
        case 0:
            float desconto = 0.15;
            printf("\nPAGAMENTO À VISTA:");
            printf("\nDesconto = %.2f%%", (desconto * 100));
            float valor_descontado = valor_total * (1 - desconto);
            printf("\nTotal com Desconto = R$ %.2f", valor_descontado);
            if(pessoas != 1) {
                float valor_por_pessoa = valor_descontado / pessoas;
                printf("\nValor por Pessoa = R$ %.2f\n", valor_por_pessoa);
            }
            break;

        //Parcelado
        case 1:
            float valor_parcelas = valor_total / parcelas;
            float valor_por_pessoa_mes = valor_parcelas / pessoas;
            printf("\nPAGAMENTO PARCELADO:");
            printf("\nParcelas = %iX R$ %.2f", parcelas, valor_parcelas);
            if(pessoas != 1) {
                printf("\nValor por Pessoa ao Mês = R$ %.2f", valor_por_pessoa_mes); 
            }
            break;
    }
}

int main() {
    setlocale(LC_ALL, "pt_br.UTF-8");

    char componentes[][30] = {
        "Placa de Vídeo",
        "Caixa de Som",
        "Kit Mouse e Teclado",
        "Monitor",
        "Memória RAM",
        "Gabinete"
    };
    int qtdeComponentes = sizeof(componentes) / sizeof(componentes[0]);
    
    float precos[qtdeComponentes];
    int opcoes[qtdeComponentes];
    memset(precos, 0, sizeof(precos));
    memset(opcoes, 0, sizeof(opcoes));

    int opcao_pagamento = 0;
    int pessoas = 0;
    int parcelas = 0;
    

    printf("\n\t=== BEM-VINDO ===");
    printf("\nVamos fazer o orçamento da sua compra!");
    printf("\nOpções de Componentes:");

    for(int i = 0; i < qtdeComponentes; i++) {
        printf("\n%s? (1 - Sim/ 0 - Não) ", componentes[i]);
        scanf("%i", &opcoes[i]);

        if(opcoes[i] == 1) {
            printf("Digite o preço (%s): ", componentes[i]);
            scanf("%f", &precos[i]);
        }
    }

    printf("\nConfira nossos Meios de Pagamento:");
    printf("\n0 - À Vista\n1 - Parcelado");
    printf("\nDigite sua escolha: ");
    scanf("%i", &opcao_pagamento);
    if(opcao_pagamento == 1) {
        printf("\nDigite o número de parcelas: ");
        scanf("%i", &parcelas);
    }

    printf("\nDigite o números de pessoas que pagarão: ");
    scanf("%i", &pessoas);


    orcamento(componentes, precos, opcoes, qtdeComponentes, pessoas, parcelas, opcao_pagamento);

    return 0;
}