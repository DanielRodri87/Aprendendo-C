#include <stdio.h>

int main() {
    char nome[50];
    int dificuldade[5];
    int tempoDiario;
    int tempoMateria[5];

    printf("Nome do aluno: ");
    scanf("%s", nome);

    for (int i = 0; i < 5; i++) {
        printf("Dificuldade da materia %d (1-Facil, 2-Dificil, 3-Muito dificil): ", i + 1);
        scanf("%d", &dificuldade[i]);
    }

    printf("Tempo diario disponivel (em horas): ");
    scanf("%d", &tempoDiario);

    for (int i = 0; i < 5; i++) {
        if (dificuldade[i] == 1) {
            tempoMateria[i] = tempoDiario;
        } else if (dificuldade[i] == 2) {
            tempoMateria[i] = 2 * tempoDiario;
        } else if (dificuldade[i] == 3) {
            tempoMateria[i] = 3 * tempoDiario;
        } else {
            printf("Dificuldade invalida para a materia %d\n", i + 1);
            return 0;
        }
    }

    printf("\nRelatorio de tempo para resolucao das materias:\n");
    for (int i = 0; i < 5; i++) {
        printf("Materia %d: %d horas\n", i + 1, tempoMateria[i]);
    }

    return 0;
}


