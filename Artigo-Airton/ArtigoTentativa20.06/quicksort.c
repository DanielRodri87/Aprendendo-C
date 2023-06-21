#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para realizar a partição do vetor para o QuickSort de três partições
void partition(int arr[], int low, int high, int* i, int* j) {
    if (high - low <= 1) {
        if (arr[high] < arr[low]) {
            int temp = arr[high];
            arr[high] = arr[low];
            arr[low] = temp;
        }
        *i = low;
        *j = high;
        return;
    }

    int mid = low;
    int pivot = arr[high];

    while (mid <= high) {
        if (arr[mid] < pivot) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if (arr[mid] == pivot) {
            mid++;
        } else if (arr[mid] > pivot) {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }

    *i = low - 1;
    *j = mid;
}

// Função recursiva para ordenar o vetor usando o QuickSort de três partições
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int i, j;

        partition(arr, low, high, &i, &j);

        quickSort(arr, low, i);
        quickSort(arr, j, high);
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

    // Ordenando os números usando o QuickSort de três partições
    quickSort(numbers, 0, size - 1);

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    // Exibindo o tempo de execução
    printf("Tempo necessário para realizar um milhão de sorteios e ordená-los: %.2f segundos\n", time_spent);

    // Liberando a memória alocada
    free(numbers);

    return 0;
}
