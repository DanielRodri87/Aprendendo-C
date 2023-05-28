#include <stdio.h>

int main() {
    char nome[50];
    int m1, m2, m3, m4, m5;
    int td;
    int tm1, tm2, tm3, tm4, tm5;
    int totalTempo;

    printf("Nome do aluno: ");
    scanf("%s", nome);

    printf("m da materia 1 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &m1);
    printf("m da materia 2 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &m2);
    printf("m da materia 3 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &m3);
    printf("m da materia 4 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &m4);
    printf("m da materia 5 (1-Facil, 2-Dificil, 3-Muito dificil): ");
    scanf("%d", &m5);

    printf("Tempo diario disponivel (em horas): ");
    scanf("%d", &td);

    td = td * 60;  

    tm1 = m1 * td;
    tm2 = m2 * td;
    tm3 = m3 * td;
    tm4 = m4 * td;
    tm5 = m5 * td;

    totalTempo = tm1 + tm2 + tm3 + tm4 + tm5;

    if (totalTempo > 24 * 60) {
        printf("O tempo total excede 24 horas diárias. Ajustando as horas de estudo.\n");

        float proporcao = (float)(24 * 60) / totalTempo; 

        tm1 = proporcao * tm1;
        tm2 = proporcao * tm2;
        tm3 = proporcao * tm3;
        tm4 = proporcao * tm4;
        tm5 = proporcao * tm5;
    }

    printf("\nRelatorio de tempo para resolucao das materias:\n");
    printf("Materia 1: %02dh%02dmin\n", tm1 / 60, tm1 % 60);
    printf("Materia 2: %02dh%02dmin\n", tm2 / 60, tm2 % 60);
    printf("Materia 3: %02dh%02dmin\n", tm3 / 60, tm3 % 60);
    printf("Materia 4: %02dh%02dmin\n", tm4 / 60, tm4 % 60);
    printf("Materia 5: %02dh%02dmin\n", tm5 / 60, tm5 % 60);

    return 0;
}