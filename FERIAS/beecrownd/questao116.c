// Leia um valor inteiro N que é o tamanho da matriz que deve ser impressa conforme o modelo fornecido.

// Entrada
// A entrada contém vários casos de teste e termina com EOF. Cada caso de teste é composto por um único inteiro N (3 ≤ N < 70), que determina o tamanho (linhas e colunas) de uma matriz que deve ser impressa.

// Saída
// Para cada N lido, apresente a saída conforme o exemplo fornecido.

#include <stdio.h>

int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                if (i == j)
                    printf("1");
                else
                    printf("3");
            printf("\n");
        }
    }
    return 0;
}