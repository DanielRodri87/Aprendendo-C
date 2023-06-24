#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_MUSICAS 16

void merge(char** arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Cria vetores temporários para armazenar as duas metades
    char** L = (char**)malloc(n1 * sizeof(char*));
    char** R = (char**)malloc(n2 * sizeof(char*));

    // Copia os dados para os vetores temporários
    for (i = 0; i < n1; i++)
        L[i] = strdup(arr[l + i]);
    for (j = 0; j < n2; j++)
        R[j] = strdup(arr[m + 1 + j]);

    // Merge dos vetores temporários de volta para o array original
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (strcmp(L[i], R[j]) <= 0) {
            strcpy(arr[k], L[i]);
            i++;
        }
        else {
            strcpy(arr[k], R[j]);
            j++;
        }
        k++;
    }

    // Copia os elementos restantes do vetor L[], se houver
    while (i < n1) {
        strcpy(arr[k], L[i]);
        i++;
        k++;
    }

    // Copia os elementos restantes do vetor R[], se houver
    while (j < n2) {
        strcpy(arr[k], R[j]);
        j++;
        k++;
    }

    // Libera a memória dos vetores temporários
    for (i = 0; i < n1; i++)
        free(L[i]);
    for (j = 0; j < n2; j++)
        free(R[j]);
    free(L);
    free(R);
}

void mergeSort(char** arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        // Ordena a primeira e a segunda metade
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main() {
    char* musicas[NUM_MUSICAS] = {
        "the 1", "cardigan", "the last great american dynasty", "exile", "my tears ricochet",
        "mirrorball", "seven", "august", "this is me trying", "illicit affairs",
        "invisible string", "mad woman", "epiphany", "betty", "peace", "hoax"
    };

    int i;
    clock_t inicio, fim;
    double tempo;

    printf("Lista de músicas do álbum 'folklore':\n");
    for (i = 0; i < NUM_MUSICAS; i++)
        printf("%s\n", musicas[i]);

    printf("\nRealizando o sorteio de uma música um milhão de vezes...\n");
    srand(time(NULL));
    int sorteios[NUM_MUSICAS] = { 0 };
    inicio = clock();
    for (i = 0; i < 1000000; i++) {
        int index = rand() % NUM_MUSICAS;
        sorteios[index]++;
    }
    fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\nNúmero de vezes que cada música foi sorteada:\n");
    for (i = 0; i < NUM_MUSICAS; i++)
        printf("%s: %d vezes\n", musicas[i], sorteios[i]);

    printf("\nTempo necessário para a execução do algoritmo: %.6f segundos\n", tempo);

    return 0;
}
