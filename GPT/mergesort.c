#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Definição da estrutura de uma música
typedef struct {
    char nome[100];
    int contador;
} Musica;

// Função de intercalação (Merge) para o Merge Sort
void merge(Musica arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Criação de arrays temporários
    Musica L[n1], R[n2];

    // Copia os dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++) {
        strcpy(L[i].nome, arr[l + i].nome);
        L[i].contador = arr[l + i].contador;
    }
    for (j = 0; j < n2; j++) {
        strcpy(R[j].nome, arr[m + 1 + j].nome);
        R[j].contador = arr[m + 1 + j].contador;
    }

    // Intercala os arrays temporários de volta em arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (strcmp(L[i].nome, R[j].nome) <= 0) {
            strcpy(arr[k].nome, L[i].nome);
            arr[k].contador = L[i].contador;
            i++;
        }
        else {
            strcpy(arr[k].nome, R[j].nome);
            arr[k].contador = R[j].contador;
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver algum
    while (i < n1) {
        strcpy(arr[k].nome, L[i].nome);
        arr[k].contador = L[i].contador;
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver algum
    while (j < n2) {
        strcpy(arr[k].nome, R[j].nome);
        arr[k].contador = R[j].contador;
        j++;
        k++;
    }
}

// Função de ordenação Merge Sort
void mergeSort(Musica arr[], int l, int r) {
    if (l < r) {
        // Encontra o ponto médio
        int m = l + (r - l) / 2;

        // Ordena as duas metades recursivamente
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Intercala as duas metades ordenadas
        merge(arr, l, m, r);
    }
}

int main() {
    // Lista de músicas do álbum "folklore" de Taylor Swift
    Musica musicas[17] = {
        {"the 1", 0}, {"cardigan", 0}, {"the last great american dynasty", 0},
        {"exile", 0}, {"my tears ricochet", 0}, {"mirrorball", 0}, {"seven", 0},
        {"august", 0}, {"this is me trying", 0}, {"illicit affairs", 0},
        {"invisible string", 0}, {"mad woman", 0}, {"epiphany", 0}, {"betty", 0},
        {"peace", 0}, {"hoax", 0}, {"the lakes", 0}
    };

    // Ordena a lista de músicas usando o Merge Sort
    int tamanho = sizeof(musicas) / sizeof(musicas[0]);
    mergeSort(musicas, 0, tamanho - 1);

    printf("Lista de músicas do álbum \"folklore\" de Taylor Swift:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d. %s\n", i + 1, musicas[i].nome);
    }
    printf("\n");

    // Sorteia uma música um milhão de vezes
    srand(time(NULL));
    char ultimaMusicaSorteada[100] = "";
    int contadorUltimaMusica = 0;

    clock_t inicio = clock();

    for (int i = 0; i < 1000000; i++) {
        int indiceSorteado = rand() % tamanho;

        // Atualiza o contador da música sorteada
        musicas[indiceSorteado].contador++;

        // Verifica se é a música do milionésimo sorteio
        if (i == 999999) {
            strcpy(ultimaMusicaSorteada, musicas[indiceSorteado].nome);
            contadorUltimaMusica = musicas[indiceSorteado].contador;
        }
    }

    clock_t fim = clock();
    double tempoExecucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Músicas sorteadas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%s: %d vezes\n", musicas[i].nome, musicas[i].contador);
    }
    printf("\n");

    printf("Música sorteada no milionésimo sorteio: %s\n", ultimaMusicaSorteada);
    printf("Quantidade de vezes sorteada: %d\n", contadorUltimaMusica);

    printf("Tempo necessário para execução: %.2f segundos\n", tempoExecucao);

    return 0;
}
