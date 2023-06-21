#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para ajustar um heap máximo
void heapify(int arr[], int n, int i) {
    int largest = i;       // Inicializa o maior como raiz
    int left = 2 * i + 1;  // Filho esquerdo do nó atual
    int right = 2 * i + 2; // Filho direito do nó atual

    // Se o filho esquerdo é maior que a raiz
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Se o filho direito é maior que a raiz
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Se o maior não for a raiz
    if (largest != i) {
        // Troca a raiz com o maior elemento
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursivamente ajusta o heap para o subárvore afetada
        heapify(arr, n, largest);
    }
}

// Função principal do Heap Sort
void heapSort(int arr[], int n) {
    // Constrói o heap (rearranja o array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extrai elementos um por um do heap
    for (int i = n - 1; i > 0; i--) {
        // Move a raiz atual para o final
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Chama a função para ajustar o heap reduzido
        heapify(arr, i, 0);
    }
}

int main() {
    // Inicialização do gerador de números aleatórios
    srand(time(0));

    // Definindo o tamanho do vetor de sorteio
    int size = 1000000;

    // Alocando memória para o vetor de sorteio
    int* numbers = (int*)malloc(size * sizeof(int));

    // Realizando os sorteios
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 100 + 1;
    }

    // Medindo o tempo de execução
    clock_t start = clock();

    // Ordenando os números usando o Heap Sort
    heapSort(numbers, size);

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    // Exibindo o tempo de execução
    printf("Tempo necessário para realizar um milhão de sorteios e ordená-los: %.2f segundos\n", time_spent);

    // Liberando a memória alocada
    free(numbers);

    return 0;
}
