#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000
#define MAX_VALUE 1000000

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
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

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];

    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void generateRandomNumbers(int arr[], int size, int max_value) {
    for (int i = 0; i < size; i++)
        arr[i] = rand() % max_value + 1;
}

void printTimeTaken(clock_t tempo, double *cpu_time_used) {
    *cpu_time_used = ((double) (tempo)) / CLOCKS_PER_SEC;
    printf("%lf\n", *cpu_time_used);
}

int main() {
    srand(time(NULL));

    int *arr = malloc(sizeof(int) * SIZE);
    generateRandomNumbers(arr, SIZE, MAX_VALUE);

    printf("Execução 1:\n");

    for (int x = 0; x < 30; x++) {
        clock_t tempo = clock();
        quickSort(arr, 0, SIZE - 1);
        tempo = clock() - tempo;
        double cpu_time_used;
        printTimeTaken(tempo, &cpu_time_used);
    }

    printf("\n");

    generateRandomNumbers(arr, SIZE, MAX_VALUE);

    printf("Execução 2:\n");

    for (int x = 0; x < 30; x++) {
        clock_t tempo = clock();
        heapSort(arr, SIZE);
        tempo = clock() - tempo;
        double cpu_time_used;
        printTimeTaken(tempo, &cpu_time_used);
    }

    printf("\n");

    generateRandomNumbers(arr, SIZE, MAX_VALUE);

    printf("Execução 3:\n");

    for (int x = 0; x < 30; x++) {
        clock_t tempo = clock();
        mergeSort(arr, 0, SIZE - 1);
        tempo = clock() - tempo;
        double cpu_time_used;
        printTimeTaken(tempo, &cpu_time_used);
    }

    free(arr);

    return 0;
}
