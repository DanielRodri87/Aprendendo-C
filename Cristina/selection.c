#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Função para trocar dois elementos do vetor
void swap(char *x, char *y) {
    char temp[100];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
}

// Função de ordenação usando o Selection Sort
void selectionSort(char arr[][100], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (strcmp(arr[j], arr[min_idx]) < 0)
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    char album[][100] = {
        "the 1",
        "cardigan",
        "the last great american dynasty",
        "exile (feat. Bon Iver)",
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

    int num_songs = sizeof(album) / sizeof(album[0]);

    printf("Exibindo a lista de músicas do álbum 'folklore' um milhão de vezes:\n");

    // Mostrar a lista de músicas um milhão de vezes
    clock_t start_time = clock();
    for (int i = 0; i < 1000000; i++) {
        for (int j = 0; j < num_songs; j++) {
            printf("%d. %s\n", j + 1, album[j]);
        }
        printf("\n");
    }
    clock_t end_time = clock();

    printf("\nSorteando 10 músicas aleatoriamente:\n");
    srand(time(0));

    // Sortear 10 músicas aleatoriamente
    for (int i = 0; i < 10; i++) {
        int random_index = rand() % num_songs;
        printf("%d. %s\n", random_index + 1, album[random_index]);
    }

    printf("\nTempo necessário para exibição: %.2f segundos\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    return 0;
}
