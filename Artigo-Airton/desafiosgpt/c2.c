#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int getPivotIndex(int arr[], int low, int high) {
    int mid = (low + high) / 2;
    
    if (arr[low] > arr[mid])
        swap(&arr[low], &arr[mid]);

    if (arr[low] > arr[high])
        swap(&arr[low], &arr[high]);

    if (arr[mid] > arr[high])
        swap(&arr[mid], &arr[high]);

    return mid;
}

int partition(int arr[], int low, int high) {
    int pivotIndex = getPivotIndex(arr, low, high);
    int pivot = arr[pivotIndex];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int* arr = (int*)malloc(1000000 * sizeof(int));

    for (int i = 0; i < 1000000; i++) {
        arr[i] = i + 1;
    }

    clock_t start = clock();

    quickSort(arr, 0, 999999);

    clock_t end = clock();
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Tempo de processamento: %.2f segundos\n", cpu_time_used);

    free(arr);

    return 0;
}
