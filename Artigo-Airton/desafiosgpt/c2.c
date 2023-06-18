#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int soma = 1;
    int numero_sorteado;
    int iteracoes = 1000000;
    clock_t inicio, fim;
    double tempo_execucao;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um número entre 1 e 10
    numero_sorteado = rand() % 10 + 1;

    // Iniciar o cronômetro
    inicio = clock();

    // Realizar a soma 1.000.000 de vezes de forma iterativa
    for (int i = 0; i < iteracoes; i++) {
        soma += numero_sorteado;
    }

    // Parar o cronômetro
    fim = clock();

    // Calcular o tempo de execução em segundos
    tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // Imprimir o resultado da soma e o tempo de execução
    printf("Resultado da soma: %d\n", soma);
    printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);

    return 0;
}
