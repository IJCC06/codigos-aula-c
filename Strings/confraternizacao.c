    #include <stdio.h>
    #include<locale.h>

    int main()
    {
        setlocale(LC_ALL, "pt_BR.UTF-8");

        int qtdePessoas = 0;
        float totalFesta = 0;
        int totalSalgados = 0;
        int totalLitros = 0;
        int opcao;
        int qtde;
        char comes [5][30] = {
            "Coxinha", "Bolinho de Queijo", "Esfiha", "Croquete", "Hamburguinho"
        };
        float valorComes[5] = {
            99.90, 82.99, 85.99, 78.99, 107.99
        };
        char bebes[5][30] = {
            "Coca Cola", "Jaboti", "Guaraná", "Suco de Laranja", "Suco de Uva"
        };
        float valorBebes[5] = {
            8.99, 9.99, 12.99, 8.99, 9.59
        };

        printf("\nVamos calcular o valor da Festinha");

        printf("\nQuantas pessoas vão participar? ");
        scanf("%i", &qtdePessoas);
        
        printf("\nEscolha os salgados:");
        for (int i = 0; i < 5; i++) {
            printf("\nVai querer %s? (1 - Sim, 0 - Não) ", comes[i]);
            scanf("%i", &opcao);
            
            if (opcao == 1) {
                printf("Quantos centos de %s? ", comes[i]);
                scanf("%i", &qtde);
                totalSalgados += qtde * 100;
                totalFesta += qtde * valorComes[i];
            }
        }

        printf("\nEscolha as bebidas:");
        for (int i = 0; i < 5; i++) {
            printf("\nVai querer %s? (1 - Sim, 0 - Não) ", bebes[i]);
            scanf("%i", &opcao);
            
            if (opcao == 1) {
                printf("Quantas unidades de %s? ", bebes[i]);
                scanf("%i", &qtde);
                if (i <= 2) {
                    totalLitros += qtde * 2; // refrigerante = 2L
                } else {
                    totalLitros += qtde * 1; // suco = 1L
                }
                totalFesta += qtde * valorBebes[i];
            }
        }

        printf("\n--- Total da Festa ---");
        printf("\nSalgados por Pessoa = %i", totalSalgados / qtdePessoas);
        printf("\nLitros por pessoa = %.3f", (float) totalLitros / qtdePessoas);
        printf("\nValor Total = R$ %.2f", totalFesta);
        printf("\nValor por Pessoa = R$ %.2f", totalFesta / qtdePessoas);

        return 0;
}