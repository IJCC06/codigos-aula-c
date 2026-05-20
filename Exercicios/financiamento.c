#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const float juros_veic = 0.015;
    const float juros_imov = 0.005;
    float preco_total = 0;
    float parcela = 0;
    float preco = 0;
    float valor_entrada = 0;
    int renda = 0;
    int tempo_financ = 0;
    int prazo = 0;
    int opcao = 0;
    int opcao_pag = 0;
    char nome[30];

    printf("\n--- Bem-Vindo(a) ---");
    
    // Nome
    printf("\nDigite seu nome: ");
    scanf("%s", nome);
    
    // Renda Mensal
    printf("Digite sua renda mensal: ");
    scanf("%i", &renda);

    // Opções de Financiamento
    printf("\nEstas são nossas opções de financiamentos:");
    printf("\n1 - Veículos\n2 - Imóveis\n0 - Sair");
    printf("\nQual tipo de investimento será feito? ");
    scanf("%i", &opcao);

    switch (opcao) {
        // Encerra o código
        case 0:
            return 0;

        // VEÍCULOS
        case 1:
            printf("\n%s, você selecionou: 'Veículos'. Estas são nossas opções:", nome);
            printf("\n11 - Caminhão\n12 - Carro\n13 - Moto");
            printf("\nQual tipo de investimento será feito? ");
            scanf("%i", &opcao);

            switch (opcao) {
                // CAMINHÃO
                case 11:
                    printf("\n%s, você selecionou: 'Caminhão'", nome);
                    printf("\nPrazos de Financiamento: 100 a 200 meses");
                    printf("\nTaxa de Juros: 1.5%% ao mês");

                    // Preço do Caminhão
                    printf("\nDigite o preço do veículo: ");
                    scanf("%f", &preco);
                    
                    // Prazo
                    do {
                        printf("Digite o prazo requisitado para o financiamento: "); 
                        scanf("%i", &prazo);
                    } while (prazo < 100 || prazo > 200);

                    break;

                // CARRO
                case 12:
                    printf("\n%s, você selecionou: 'Carro'", nome);
                    printf("\nPrazos de Financiamento: 6 a 48 meses");
                    printf("\nTaxa de Juros: 1.5%% ao mês");

                    // Preço do Carro
                    printf("\nDigite o preço do veículo: ");
                    scanf("%f", &preco);

                    //Prazo
                    do {
                        printf("Digite o prazo requisitado para o financiamento: "); 
                        scanf("%i", &prazo);
                    } while (prazo < 6 || prazo > 48);

                    break;

                // MOTO
                case 13:
                    printf("\n%s, você selecionou: 'Moto'", nome);
                    printf("\nPrazos de Financiamento: 3 a 24 meses");
                    printf("\nTaxa de Juros: 1.5%% ao mês");
                    
                    // Preço da Moto
                    printf("\nDigite o preço do veículo: ");
                    scanf("%f", &preco);

                    //Prazo
                    do {
                        printf("Digite o prazo requisitado para o financiamento: "); 
                        scanf("%i", &prazo);
                    } while (prazo < 3 || prazo > 24);

                    break;

                default:
                    printf("Não temos essa opção de investimento");
                    return 0;
            }

            break;

        // IMÓVEIS
        case 2:
            printf("\n%s, você selecionou: 'Imóveis'. Estas são nossas opções:", nome);
            printf("\n21 - Casa\n22 - Apartamentos");
            printf("\nQual tipo de investimento será feito? ");
            scanf("%i", &opcao);

            switch (opcao) {
                // CASA
                case 21:
                    printf("\n%s, você selecionou: 'Casa'", nome);
                    printf("\nPrazos de Financiamento: 150 a 360 meses");
                    printf("\nTaxa de Juros: 0.5%% ao mês");

                    // Preço da Casa
                    printf("\nDigite o preço do imóvel: ");
                    scanf("%f", &preco);

                    //Prazo
                    do {
                        printf("Digite o prazo requisitado para o financiamento: "); 
                        scanf("%i", &prazo);
                    } while (prazo < 150 || prazo > 360);
                    
                    break;

                // APARTAMENTO
                case 22:
                    printf("\n%s, você selecionou: 'Apartamento'", nome);
                    printf("\nPrazos de Financiamento: 100 a 300 meses");
                    printf("\nTaxa de Juros: 0.5%% ao mês");

                    // Preço do Apartamento
                    printf("\nDigite o preço do imóvel: ");
                    scanf("%f", &preco);

                    //Prazo
                    do {
                        printf("Digite o prazo requisitado para o financiamento: "); 
                        scanf("%i", &prazo);
                    } while (prazo < 100 || prazo > 300);

                    break;

                default:
                    printf("Não temos essa opção de investimento");
                    return 0;
            }

            break;

        default:
            printf("Não temos essa opção de investimento");
            break;

    }

    //Opção de Pagamento
    printf("\n%s, estes são nossos métodos de pagamento:", nome);
    printf("\n0 - S/ Entrada\n1 - Entrada de 5%%\n2 - Entrada de 10%%\n3 - Personalizado");
    
    do {
        printf("\nSelecione uma forma de pagamento: ");
        scanf("%i", &opcao_pag);
    } while (opcao_pag < 0 || opcao_pag > 3);

    // Cálculo da Entrada
    switch (opcao_pag) {
        case 0:
            break;

        case 1:
            valor_entrada = preco * 0.05;
            break;

        case 2:
            valor_entrada = preco * 0.1;
            break;

        case 3:
            printf("Digite o valor da entrada: ");
            scanf("%f", &valor_entrada);
            break;
    }

    // Cálculo dos Juros
    if (opcao >= 11 && opcao <= 13) {
        preco_total = (preco - valor_entrada) + ((preco - valor_entrada) * juros_veic * prazo);
    } else if (opcao >= 21 && opcao <= 22) {
        preco_total = (preco - valor_entrada) + ((preco - valor_entrada) * juros_imov * prazo);
    }

    // Cálculo da Parcela
    parcela = preco_total / prazo;

    // Verificação da Parcela
    if (parcela > (renda * 0.3)) {
        printf("\nEste financiamento não foi aprovado.");
        return 0;
    } else {
        printf("\nParabéns, %s! Seu financiamento foi aprovado!\n", nome);
    }


    // Tela Final
    printf("\n--- Descrição do Financiamento ---");
    
    // Tipo
    printf("\nTipo de Financiamento: ");
    if (opcao >= 11 && opcao <= 13) {
        printf("Veículo");
    } else if (opcao >= 21 && opcao <= 22) {
        printf("Imóvel");
    }

    // Bem Financiado
    printf("\nBem Financiado: ");
    switch (opcao) {
    case 11: printf("Caminhão"); break;
    case 12: printf("Carro"); break;
    case 13: printf("Moto"); break;
    case 21: printf("Casa"); break;
    case 22: printf("Apartamento"); break;
    }
    
    // Prazo
    printf("\nPrazo do Financiamento: %i meses", prazo);
        
    // Taxa de Juros
    printf("\nTaxa de Juros: ");
    if (opcao >= 11 && opcao <= 13) {
        printf("1.5%% ao mês");
    } else if (opcao >= 21 && opcao <= 22) {
        printf("0.5%% ao mês");
    }

    // Método de Pagamento
    printf("\n\nMétodo de Pagamento: ");
    switch (opcao_pag) {
        case 0: printf("S/ Entrada"); break;
        case 1: printf("Entrada de 5%%"); break;
        case 2: printf("Entrada de 10%%"); break;
        case 3: printf("Personalizado"); break;
    }

    // Valor Bruto
    printf("\nValor Bruto do Bem Financiado: R$ %.2f", preco);
    
    // Valor da Entrada (se houver)
    if (opcao_pag != 0) {
        if (opcao_pag == 1 || opcao_pag == 2 || opcao_pag == 3) {
            printf("\nValor da Entrada : R$ %.2f", valor_entrada);
            // Valor com o desconto da Entrada
            printf("\nValor após o desconto da entrada: %.2f", preco - valor_entrada);
        }
    }

    // Valor Total
    printf("\nValor Total do Financiamento: R$ %.2f", preco_total);
    
    // Valor da Parcela
    printf("\nValor da Parcela: R$ %.2f\n", parcela);
    printf("----------------------------------");

    printf("\nDesenvolvido por IJCC");

    return 0;
}