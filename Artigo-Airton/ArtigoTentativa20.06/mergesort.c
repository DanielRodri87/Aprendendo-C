#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para realizar a mesclagem de dois subvetores ordenados
void merge(int arr[], int left[], int right[], int leftSize, int rightSize) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Função recursiva para dividir e ordenar o vetor usando o Merge Sort
void mergeSort(int arr[], int size) {
    if (size < 2)
        return;

    int mid = size / 2;
    int* left = (int*)malloc(mid * sizeof(int));
    int* right = (int*)malloc((size - mid) * sizeof(int));

    for (int i = 0; i < mid; i++)
        left[i] = arr[i];

    for (int i = mid; i < size; i++)
        right[i - mid] = arr[i];

    mergeSort(left, mid);
    mergeSort(right, size - mid);
    merge(arr, left, right, mid, size - mid);

    free(left);
    free(right);
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

    // Ordenando os números usando o Merge Sort
    mergeSort(numbers, size);

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    // Exibindo o tempo de execução
    printf("Tempo necessário para realizar um milhão de sorteios e ordená-los: %.2f segundos\n", time_spent);

    // Liberando a memória alocada
    free(numbers);

    return 0;
}
