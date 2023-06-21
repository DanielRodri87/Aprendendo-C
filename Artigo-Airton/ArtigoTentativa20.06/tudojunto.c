#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para realizar a mesclagem de dois subvetores ordenados (Merge Sort)
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

// Função recursiva para dividir e ordenar o vetor (Merge Sort)
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

// Função para realizar a partição do vetor (QuickSort)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

// Função recursiva para ordenar o vetor (QuickSort)
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função para ajustar um heap máximo (Heap Sort)
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

// Função principal do Heap Sort
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

int main() {
    // Inicialização do gerador de números aleatórios
    srand(time(0));

    // Definindo o tamanho do vetor de sorteio
    int size = 1000000;

    // Alocando memória para o vetor de sorteio
    int* numbers_merge = (int*)malloc(size * sizeof(int));
    int* numbers_quick = (int*)malloc(size * sizeof(int));
    int* numbers_heap = (int*)malloc(size * sizeof(int));

    // Executando os algoritmos 30 vezes
    for (int i = 0; i < 30; i++) {
        // Realizando os sorteios
        for (int j = 0; j < size; j++) {
            numbers_merge[j] = rand() % 100 + 1;
            numbers_quick[j] = numbers_merge[j];
            numbers_heap[j] = numbers_merge[j];
        }

        // Medindo o tempo de execução para o Merge Sort
        clock_t start_merge = clock();
        mergeSort(numbers_merge, size);
        clock_t end_merge = clock();
        double time_spent_merge = (double)(end_merge - start_merge) / CLOCKS_PER_SEC;

        // Medindo o tempo de execução para o QuickSort
        clock_t start_quick = clock();
        quickSort(numbers_quick, 0, size - 1);
        clock_t end_quick = clock();
        double time_spent_quick = (double)(end_quick - start_quick) / CLOCKS_PER_SEC;

        // Medindo o tempo de execução para o Heap Sort
        clock_t start_heap = clock();
        heapSort(numbers_heap, size);
        clock_t end_heap = clock();
        double time_spent_heap = (double)(end_heap - start_heap) / CLOCKS_PER_SEC;

        // Exibindo os tempos de execução
        printf("Execução %d:\n", i + 1);
        printf("Tempo Merge Sort: %.6f segundos\n", time_spent_merge);
        printf("Tempo QuickSort: %.6f segundos\n", time_spent_quick);
        printf("Tempo Heap Sort: %.6f segundos\n", time_spent_heap);
        printf("\n");
    }

    // Liberando a memória alocada
    free(numbers_merge);
    free(numbers_quick);
    free(numbers_heap);

    return 0;
}
