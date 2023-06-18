#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int i;
    int count = 1000000;

    int* arr = (int*)malloc(count * sizeof(int));

    srand(time(NULL));
    for (i = 0; i < count; i++) {
        arr[i] = rand() % 1000000;
    }

    clock_t start_time = clock();

    quickSort(arr, 0, count - 1);

    clock_t end_time = clock();
    double total_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Tempo necessário para QuickSort: %f segundos\n", total_time);

    free(arr);

    return 0;
}
