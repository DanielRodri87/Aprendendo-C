#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_MUSICAS 17
#define NUM_SORTEIOS 1000000

void selectSort(char **array, int n) {
    int i, j, min_index;
    char *temp;
    
    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(array[j], array[min_index]) < 0) {
                min_index = j;
            }
        }
        if (min_index != i) {
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    char *musicas[NUM_MUSICAS] = {
        "the 1", "cardigan", "the last great american dynasty", "exile",
        "my tears ricochet", "mirrorball", "seven", "august", "this is me trying",
        "illicit affairs", "invisible string", "mad woman", "epiphany",
        "betty", "peace", "hoax", "the lakes"
    };
    
    // Exibir lista de músicas do álbum
    printf("Lista de músicas do álbum \"folklore\" de Taylor Swift:\n");
    for (int i = 0; i < NUM_MUSICAS; i++) {
        printf("%d. %s\n", i + 1, musicas[i]);
    }
    printf("\n");

    // Sortear uma música um milhão de vezes
    srand(time(NULL));
    int contador[NUM_MUSICAS] = {0};

    start = clock();
    for (int i = 0; i < NUM_SORTEIOS; i++) {
        int index = rand() % NUM_MUSICAS;
        contador[index]++;
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Exibir músicas sorteadas e quantidade de vezes sorteada
    printf("Músicas sorteadas:\n");
    for (int i = 0; i < NUM_MUSICAS; i++) {
        printf("%s: %d vezes\n", musicas[i], contador[i]);
    }
    printf("\n");

    // Encontrar música sorteada no milionésimo sorteio
    int maxIndex = 0;
    for (int i = 1; i < NUM_MUSICAS; i++) {
        if (contador[i] > contador[maxIndex]) {
            maxIndex = i;
        }
    }

    // Exibir música sorteada no milionésimo sorteio
    printf("Música sorteada no milionésimo sorteio: %s\n", musicas[maxIndex]);

    // Exibir tempo necessário para execução
    printf("Tempo necessário para execução: %.2f segundos\n", cpu_time_used);

    return 0;
}
