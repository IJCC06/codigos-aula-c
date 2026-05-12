#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[10] = "Gabriel";
    char logradouro[40] = "Rua Professor Olavo Ferreira da Silva";
    char bairro[10] = "Pombeva";
    char cidade[11] = "Piracicaba";
    char uf[3] = "SP";

    printf("--- Minhas Informações Residenciais ---");
    printf("\nNome: %s", nome);
    printf("\nLogradouro: %s", logradouro);
    printf("\nBairro: %s", bairro);
    printf("\nCidade: %s", cidade);
    printf("\nUF: %s", uf);

    return 0;
}