// Diana escreverá uma lista com todos os inteiros positivos entre A e B, inclusive, na base decimal e sem zeros à esquerda. Ela quer saber quantas vezes cada um dos dígitos irá ser usado.

// Entrada
// Cada caso de teste é dado em uma única linha que contém dois inteiros A e B (1 ≤ A ≤ B ≤ 108). O último caso de teste é seguido por uma linha contendo dois zeros.
// Saída
// Para cada caso de teste, imprima uma única linha com 10 inteiros representando o número de vezes que cada dígito é usado ao escrever todos os inteiros entre A e B, inclusive, na base decimal e sem zeros à esquerda. Escreva a contagem de cada dígito em ordem crescente do 0 até o 9.

// Exemplo de Entrada	Exemplo de Saída
// 1 9
// 12 321
// 5987 6123
// 12345678 12345679
// 0 0

// 0 1 1 1 1 1 1 1 1 1
// 61 169 163 83 61 61 61 61 61 61
// 134 58 28 24 23 36 147 24 27 47
// 0 2 2 2 2 2 2 2 1 1

#include <stdio.h>

int main()
{
    int a, b, i, j, k, l, m, n, o, p, q, r;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        j = i / 100000000;
        k = (i % 100000000) / 10000000;
        l = ((i % 100000000) % 10000000) / 1000000;
        m = (((i % 100000000) % 10000000) % 1000000) / 100000;
        n = ((((i % 100000000) % 10000000) % 1000000) % 100000) / 10000;
        o = (((((i % 100000000) % 10000000) % 1000000) % 100000) % 10000) / 1000;
        p = ((((((i % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) / 100;
        q = (((((((i % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) / 10;
        r = ((((((((i % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10);
        printf("%d %d %d %d %d %d %d %d %d %d\n", j, k, l, m, n, o, p, q, r);
    }
    return 0;
}