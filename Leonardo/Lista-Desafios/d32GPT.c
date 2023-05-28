#include <stdio.h>

int main() {
    int horasAtividade;
    int pontos = 0;
    float dinheiro = 0.0;

    printf("Informe quantas horas de atividade física você realizou no mês: ");
    scanf("%d", &horasAtividade);

    if (horasAtividade <= 10) {
        pontos = horasAtividade * 2;
    } else if (horasAtividade <= 20) {
        pontos = 10 + (horasAtividade - 10) * 5; 
    } else {
        pontos = 10 + 50 + (horasAtividade - 20) * 10;
    }

    dinheiro = pontos * 0.05;

    printf("Você acumulou %d pontos.\n", pontos);
    printf("Você ganhou R$%.2f.\n", dinheiro);

    return 0;
}
