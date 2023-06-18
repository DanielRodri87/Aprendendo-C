#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar uma lista de números aleatórios
int* gerar_numeros(int n) {
    int* numeros = (int*)malloc(n * sizeof(int));
    int i;
    for (i = 0; i < n; i++) {
        numeros[i] = rand() % 1000000; // Intervalo de 0 a 1 milhão
    }
    return numeros;
}

// Função para intercalar dois subarrays em ordem crescente
void merge(int arr[], int esquerda[], int tamanho_esquerda, int direita[], int tamanho_direita) {
    int i = 0, j = 0, k = 0;

    while (i < tamanho_esquerda && j < tamanho_direita) {
        if (esquerda[i] <= direita[j]) {
            arr[k] = esquerda[i];
            i++;
        } else {
            arr[k] = direita[j];
            j++;
        }
        k++;
    }

    while (i < tamanho_esquerda) {
        arr[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < tamanho_direita) {
        arr[k] = direita[j];
        j++;
        k++;
    }
}

// Função principal do Merge Sort
void merge_sort(int arr[], int tamanho) {
    if (tamanho <= 1) {
        return;
    }

    int meio = tamanho / 2;
    int* esquerda = (int*)malloc(meio * sizeof(int));
    int* direita = (int*)malloc((tamanho - meio) * sizeof(int));

    int i;
    for (i = 0; i < meio; i++) {
        esquerda[i] = arr[i];
    }

    for (i = meio; i < tamanho; i++) {
        direita[i - meio] = arr[i];
    }

    merge_sort(esquerda, meio);
    merge_sort(direita, tamanho - meio);
    merge(arr, esquerda, meio, direita, tamanho - meio);

    free(esquerda);
    free(direita);
}

int main() {
    int n; // Tamanho da lista de números
    int* numeros;
    clock_t inicio, fim;
    double tempo_total;

    printf("Digite o tamanho da lista de numeros: ");
    scanf("%d", &n);

    numeros = gerar_numeros(n);

    inicio = clock();
    merge_sort(numeros, n);
    fim = clock();

    tempo_total = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("Tempo total de ordenacao: %.2lf segundos\n", tempo_total);

    free(numeros);

    return 0;
}