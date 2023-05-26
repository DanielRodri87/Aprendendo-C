#include <stdio.h>

int main() {
    char nome[50];
    int dificuldade1, dificuldade2, dificuldade3, dificuldade4, dificuldade5;
    int tempoDiario;
    int tempoMateria1, tempoMateria2, tempoMateria3, tempoMateria4, tempoMateria5;
    int totalTempo;

    printf("Nome do aluno: ");
    scanf("%s", nome);

    printf("Dificuldade da materia 1 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &dificuldade1);
    printf("Dificuldade da materia 2 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &dificuldade2);
    printf("Dificuldade da materia 3 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &dificuldade3);
    printf("Dificuldade da materia 4 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &dificuldade4);
    printf("Dificuldade da materia 5 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &dificuldade5);

    printf("Tempo diario disponivel (em horas): ");
    scanf("%d", &tempoDiario);

    tempoDiario = tempoDiario * 60;  

    tempoMateria1 = dificuldade1 * tempoDiario;
    tempoMateria2 = dificuldade2 * tempoDiario;
    tempoMateria3 = dificuldade3 * tempoDiario;
    tempoMateria4 = dificuldade4 * tempoDiario;
    tempoMateria5 = dificuldade5 * tempoDiario;

    totalTempo = tempoMateria1 + tempoMateria2 + tempoMateria3 + tempoMateria4 + tempoMateria5;

    if (totalTempo > 24 * 60) {
        printf("O tempo total excede 24 horas diárias. Ajustando as horas de estudo.\n");

        float proporcao = (float)(24 * 60) / totalTempo; 

        tempoMateria1 = proporcao * tempoMateria1;
        tempoMateria2 = proporcao * tempoMateria2;
        tempoMateria3 = proporcao * tempoMateria3;
        tempoMateria4 = proporcao * tempoMateria4;
        tempoMateria5 = proporcao * tempoMateria5;
    }

    printf("\nRelatorio de tempo para resolucao das materias:\n");
    printf("Materia 1: %02dh%02dmin\n", tempoMateria1 / 60, tempoMateria1 % 60);
    printf("Materia 2: %02dh%02dmin\n", tempoMateria2 / 60, tempoMateria2 % 60);
    printf("Materia 3: %02dh%02dmin\n", tempoMateria3 / 60, tempoMateria3 % 60);
    printf("Materia 4: %02dh%02dmin\n", tempoMateria4 / 60, tempoMateria4 % 60);
    printf("Materia 5: %02dh%02dmin\n", tempoMateria5 / 60, tempoMateria5 % 60);

    return 0;
}
