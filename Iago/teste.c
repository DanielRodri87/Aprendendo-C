#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int* fibonacci(int n) {
    int* fib = (int*)malloc(n * sizeof(int));
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}

int* getEvenNumbers(int arr[], int n, int count) {
    int* evenNumbers = (int*)malloc(count * sizeof(int));
    int index = 0;

    for (int i = 0; i < n && index < count; i++) {
        if (arr[i] >= 0 && arr[i] % 2 == 0) {
            evenNumbers[index] = arr[i];
            index++;
        }
    }

    return evenNumbers;
}

int main() {
    int n = 1000000;  // Aumentando o valor de n

    int* numbers = fibonacci(n);

    for (int i = 0; i < 30; i++) {
        clock_t startFiltering = clock();
        int count = n;
        int* evenNumbers = getEvenNumbers(numbers, n, count);
        clock_t endFiltering = clock();

        clock_t startSorting = clock();
        shellSort(evenNumbers, count);
        clock_t endSorting = clock();

        double timeFiltering = ((double)(endFiltering - startFiltering)) / CLOCKS_PER_SEC;
        double timeSorting = ((double)(endSorting - startSorting)) / CLOCKS_PER_SEC;
        double totalTime = timeFiltering + timeSorting;

        printf("Tempo de execução na iteração %d: %.2f segundos\n", i + 1, totalTime);

        free(evenNumbers);
    }

    free(numbers);

    return 0;
}