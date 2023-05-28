#include <stdio.h>

int main() {
    int cigarros_por_dia, anos_de_tabagismo;
    int total_cigarros, tempo_perdido_minutos, tempo_perdido_dias;

    printf("Quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarros_por_dia);

    printf("Quantidade de anos de tabagismo: ");
    scanf("%d", &anos_de_tabagismo);

    total_cigarros = cigarros_por_dia * 365 * anos_de_tabagismo;
    tempo_perdido_minutos = total_cigarros * 10;
    tempo_perdido_dias = tempo_perdido_minutos / (24 * 60);

    printf("Um fumante perderá aproximadamente %d dias de vida.\n", tempo_perdido_dias);

    return 0;
}
