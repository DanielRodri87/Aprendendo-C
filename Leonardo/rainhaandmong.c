#include <stdio.h>

unsigned long long calcula_graos() {
    unsigned long long total_graos = 0;
    unsigned long long graos_no_quadro = 1;

    for (int linha = 1; linha <= 8; linha++) {
        for (int coluna = 1; coluna <= 8; coluna++) {
            total_graos += graos_no_quadro;
            graos_no_quadro *= 2;
        }
    }

    return total_graos;
}

int main() {
    unsigned long long resultado = calcula_graos();
    printf("O número total de grãos que o monge esperava receber é: %llu\n", resultado);

    return 0;
}
