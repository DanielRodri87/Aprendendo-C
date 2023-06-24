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

    printf("Lista de músicas do álbum 'folklore':\n");
    for (int i = 0; i < num_songs; i++) {
        printf("%d. %s\n", i + 1, album[i]);
    }

    printf("\nOrdenando as músicas em ordem alfabética...\n");
    selectionSort(album, num_songs);

    printf("\nLista de músicas do álbum 'folklore' (ordenada):\n");
    for (int i = 0; i < num_songs; i++) {
        printf("%d. %s\n", i + 1, album[i]);
    }

    printf("\nSorteando uma música um milhão de vezes...\n");
    srand(time(0));
    int *count = calloc(num_songs, sizeof(int));
    int max_index = 0;

    clock_t start_time = clock();
    for (int i = 0; i < 1000000; i++) {
        int random_index = rand() % num_songs;
        count[random_index]++;
        if (count[random_index] > count[max_index]) {
            max_index = random_index;
        }
    }
    clock_t end_time = clock();

    printf("\nA música mais sorteada: %s\n", album[max_index]);
    printf("Número de vezes sorteada: %d\n", count[max_index]);
    printf("Tempo necessário para a execução: %.2f segundos\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    free(count);

    return 0;
}
