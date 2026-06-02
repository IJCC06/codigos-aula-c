#include <stdio.h>
#include <locale.h>

void ola() {
    printf("\n--- Seja Bem-Vindo! ---");
}

void horas(int semestres, int horasPorDia) {
    int horasPorSemestre = ((horasPorDia * 5) * 4) * 5;
    int horasTotais = horasPorSemestre * semestres;

    printf("\nHoras por Semestre = %i horas", horasPorSemestre);
    printf("\nDuração Total do Curso = %i horas", horasTotais);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int semestres = 0;
    int cargaDiaria = 0;

    ola();

    printf("\nDigite a quantidade de semestres no curso: ");
    scanf("%i", &semestres);

    printf("Digite a carga horária por dia: ");
    scanf("%i", &cargaDiaria);

    horas(semestres, cargaDiaria);
}