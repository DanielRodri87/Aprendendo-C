// Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1). Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

// Entrada
// A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

// Saída
// A saída contém apenas um valor inteiro.

// Exemplo de Entrada	Exemplo de Saída
// 3 2

// 7

// 3 -1 0 -2 2

// 7

#include <stdio.h>

int main() {
    int a, n, i, soma;

    scanf("%d %d", &a, &n);

    while (n <= 0) {
        scanf("%d", &n);
    }

    soma = a;

    for (i = 1; i < n; i++) {
        soma += a + i;
    }

    printf("%d\n", soma);

    return 0;
}