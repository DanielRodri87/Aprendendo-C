// Função Pow

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int soma = 1;
    int numero_sorteado;
    clock_t inicio, fim;
    double tempo_execucao;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Sortear um número entre 1 e 10
    numero_sorteado = rand() % 10 + 1;

    // Iniciar o cronômetro
    inicio = clock();

    // Realizar a soma 1.000.000 de vezes usando a função pow()
    for (int i = 0; i < 1000000; i++) {
        soma += (int)pow(numero_sorteado, i);
    }

    // Parar o cronômetro
    fim = clock();

    // Calcular o tempo de execução em segundos
    tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // Imprimir o resultado da soma e o tempo de execução
    printf("Resultado da soma: %d\n", soma);
    printf("Tempo de execucao: %f segundos\n", tempo_execucao);

    return 0;
}
