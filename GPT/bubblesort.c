#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void bubbleSort(char **array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(array[j], array[j + 1]) > 0) {
                char *temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printSongs(char **songs, int numSongs) {
    printf("Lista de músicas do álbum 'folklore' de Taylor Swift:\n");
    for (int i = 0; i < numSongs; i++) {
        printf("%d. %s\n", i + 1, songs[i]);
    }
    printf("\n");
}

void printSongCounts(char **songs, int *songCounts, int numSongs) {
    printf("Músicas sorteadas:\n");
    for (int i = 0; i < numSongs; i++) {
        printf("%s: %d vezes\n", songs[i], songCounts[i]);
    }
    printf("\n");
}

int main() {
    char *songs[] = {
        "august",
        "betty",
        "cardigan",
        "epiphany",
        "exile",
        "hoax",
        "illicit affairs",
        "invisible string",
        "mad woman",
        "mirrorball",
        "my tears ricochet",
        "peace",
        "seven",
        "the 1",
        "the lakes",
        "the last great american dynasty",
        "this is me trying"
    };
    int numSongs = sizeof(songs) / sizeof(songs[0]);

    clock_t start = clock();  // Tempo inicial

    bubbleSort(songs, numSongs);
    printSongs(songs, numSongs);

    srand(time(0));
    int songCounts[numSongs];
    for (int i = 0; i < numSongs; i++) {
        songCounts[i] = 0;
    }

    printf("Sorteando músicas...\n");
    for (int i = 0; i < 1000000; i++) {
        int randomIndex = rand() % numSongs;
        songCounts[randomIndex]++;
    }
    printf("Sorteio concluído.\n\n");

    printSongCounts(songs, songCounts, numSongs);

    int maxCount = 0;
    int maxIndex = 0;
    for (int i = 0; i < numSongs; i++) {
        if (songCounts[i] > maxCount) {
            maxCount = songCounts[i];
            maxIndex = i;
        }
    }

    clock_t end = clock();  // Tempo final
    double totalTime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Música sorteada no milionésimo sorteio: %s\n", songs[maxIndex]);
    printf("Quantidade de vezes sorteada: %d\n", songCounts[maxIndex]);
    printf("Tempo necessário para execução: %.2lf segundos\n", totalTime);

    return 0;
}
