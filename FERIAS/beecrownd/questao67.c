// Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

// Entrada
// A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. O final da entrada é marcado por um valor de ordem igual a zero (0).

// Saída
// Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço. Após o último caractere de cada linha da matriz não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.

// Exemplo de Entrada	Exemplo de Saída
// 1
// 2
// 3
// 4
// 5
// 0

//   1
 
//   1   1
//   1   1
 
//   1   1   1
//   1   2   1
//   1   1   1
   
//   1   1   1   1
//   1   2   2   1
//   1   2   2   1
//   1   1   1   1
 
//   1   1   1   1   1
//   1   2   2   2   1
//   1   2   3   2   1
//   1   2   2   2   1
//   1   1   1   1   1
 

#include <stdio.h>

int main()
{
    int n, i = 0, j = 0, k = 0, l = 0, m = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int matriz[n][n];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                matriz[i][j] = 0;
        }
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n - i; j++)
            {
                matriz[i][j] = i + 1;
                matriz[n - i - 1][j] = i + 1;
                matriz[j][i] = i + 1;
                matriz[j][n - i - 1] = i + 1;
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                printf("%3d ", matriz[i][j]);
            }
            printf("%3d\n", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}