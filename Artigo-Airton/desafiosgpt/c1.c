// For

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int soma = 1;
    int numero_sorteado;
    struct timespec inicio, fim;
    double tempo_execucao;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um número entre 1 e 10
    numero_sorteado = rand() % 10 + 1;

    // Iniciar o cronômetro
    clock_gettime(CLOCK_MONOTONIC, &inicio);

    // Realizar a soma 1.000.000 de vezes
    for (i = 0; i < 1000000; i++) {
        soma += numero_sorteado;
    }

    // Parar o cronômetro
    clock_gettime(CLOCK_MONOTONIC, &fim);

    // Calcular o tempo de execução em segundos
    tempo_execucao = (fim.tv_sec - inicio.tv_sec) + (fim.tv_nsec - inicio.tv_nsec) / 1e9;

    // Imprimir o resultado da soma e o tempo de execução
    printf("Resultado da soma: %d\n", soma);
    printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);

    return 0;
}
