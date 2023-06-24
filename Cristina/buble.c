#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int leftArr[n1], rightArr[n2];

    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

void printSongs(const char *songs[], int size) {
    printf("Lista de músicas do álbum 'folklore':\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s\n", i + 1, songs[i]);
    }
    printf("\n");
}

int main() {
    const char *songs[] = {
        "the 1",
        "cardigan",
        "the last great american dynasty",
        "exile",
        "my tears ricochet",
        "mirrorball",
        "seven",
        "august",
        "this is me trying",
        "illicit affairs",
        "invisible string",
        "mad woman",
        "epiphany",
        "betty",
        "peace",
        "hoax"
    };
    int numSongs = sizeof(songs) / sizeof(songs[0]);

    // Exibindo a lista de músicas do álbum "folklore"
    printSongs(songs, numSongs);

    // Sorteando uma música um milhão de vezes
    srand(time(NULL));
    int songCount[numSongs];
    for (int i = 0; i < numSongs; i++) {
        songCount[i] = 0;
    }

    clock_t start = clock();
    for (int i = 0; i < 1000000; i++) {
        int randomIndex = rand() % numSongs;
        songCount[randomIndex]++;
    }
    clock_t end = clock();

    // Exibindo as músicas e quantas vezes foram sorteadas
    printf("Músicas sorteadas:\n");
    for (int i = 0; i < numSongs; i++) {
        printf("%s: %d vezes\n", songs[i], songCount[i]);
    }

    // Exibindo o tempo necessário para a execução do algoritmo
    double timeTaken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTempo necessário para a execução do algoritmo: %.4f segundos\n", timeTaken);

    return 0;
}
