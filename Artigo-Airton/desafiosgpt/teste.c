#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int* arr = (int*)malloc(1000000 * sizeof(int));

    for (int i = 0; i < 1000000; i++) {
        arr[i] = i + 1;
    }

    clock_t start = clock();
    
    insertionSort(arr, 1000000);

    clock_t end = clock();
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Tempo de processamento: %.2f segundos\n", cpu_time_used);

    free(arr);

    return 0;
}