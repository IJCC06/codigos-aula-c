#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[20];
    int serie;
    int idade;
    char escola[15];
    char faz_curso[5];
    char curso_tecnico[25];
    

    printf("--- Pesquisa Estudantil Pró Lei Felca ---");
    printf("\nQual o seu nome? ");
    scanf(" %[^\n]", nome);
    printf("Qual a sua idade? ");
    scanf("%i", &idade);
    printf("Em qual escola você estuda? ");
    scanf(" %s", escola);
    printf("Qual a sua série? (Escreva em numeros) ");
    scanf("%i", &serie);
    printf("Faz algum curso técnico? ");
    scanf(" %s", faz_curso);
    printf("Qual o seu curso? ");
    scanf(" %[^\n]", curso_tecnico);


    printf("\n--- Revisando as Informações ---");
    printf("\nNome: %s", nome);
    printf("\nIdade: %i", idade);
    printf("\nEscola: %s", escola);
    printf("\nSérie: %i", serie);
    printf("\nFaz Curso Técnico: %s", faz_curso);
    printf("\nCurso: %s", curso_tecnico);

    return 0;
}