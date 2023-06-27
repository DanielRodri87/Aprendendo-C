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

// Função para realizar a partição do vetor (ShellSort)
void shellSort(int arr[], int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
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
    int* numbers_shell = (int*)malloc(size * sizeof(int));
    int* numbers_heap = (int*)malloc(size * sizeof(int));

    // Variáveis para acumular os tempos
    double total_time_merge = 0.0;
    double total_time_shell = 0.0;
    double total_time_heap = 0.0;

    // Executando os algoritmos 30 vezes
    for (int i = 0; i < 30; i++) {
        // Realizando os sorteios
        for (int j = 0; j < size; j++) {
            numbers_merge[j] = rand() % 100 + 1;
            numbers_shell[j] = numbers_merge[j];
            numbers_heap[j] = numbers_merge[j];
        }

        // Medindo o tempo de execução para o Merge Sort
        clock_t start_merge = clock();
        mergeSort(numbers_merge, size);
        clock_t end_merge = clock();
        double time_spent_merge = (double)(end_merge - start_merge) / CLOCKS_PER_SEC;
        total_time_merge += time_spent_merge;

        // Medindo o tempo de execução para o ShellSort
        clock_t start_shell = clock();
        shellSort(numbers_shell, size);
        clock_t end_shell = clock();
        double time_spent_shell = (double)(end_shell - start_shell) / CLOCKS_PER_SEC;
        total_time_shell += time_spent_shell;

        // Medindo o tempo de execução para o Heap Sort
        clock_t start_heap = clock();
        heapSort(numbers_heap, size);
        clock_t end_heap = clock();
        double time_spent_heap = (double)(end_heap - start_heap) / CLOCKS_PER_SEC;
        total_time_heap += time_spent_heap;

        // Exibindo os tempos de execução
        printf("Execução %d:\n", i + 1);
        printf("Tempo Merge Sort: %.6f segundos\n", time_spent_merge);
        printf("Tempo ShellSort: %.6f segundos\n", time_spent_shell);
        printf("Tempo Heap Sort: %.6f segundos\n", time_spent_heap);
        printf("\n");
    }

    // Calculando as médias
    double average_time_merge = total_time_merge / 30;
    double average_time_shell = total_time_shell / 30;
    double average_time_heap = total_time_heap / 30;

    // Exibindo as médias
    printf("Média dos tempos:\n");
    printf("Média Merge Sort: %.6f segundos\n", average_time_merge);
    printf("Média ShellSort: %.6f segundos\n", average_time_shell);
    printf("Média Heap Sort: %.6f segundos\n", average_time_heap);

    // Liberando a memória alocada
    free(numbers_merge);
    free(numbers_shell);
    free(numbers_heap);

    return 0;
}
