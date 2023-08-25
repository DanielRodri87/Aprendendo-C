// Neste programa seu trabalho é ler um valor inteiro que será o tamanho da matriz quadrada (largura e altura) que será preenchida da seguinte forma: a parte externa é preenchida com 0, a parte interna é preenchida com 1, a diagonal principal é preenchida com 2, a diagonal secundária é preenchida com 3 e o ponto central contém o valor 4, conforme os exemplos abaixo.

// Obs: o quadrado com '1' sempre começa na posição tamanho/3, tanto na largura quanto quanto na altura. A linha e a coluna começam em zero (0).

// Entrada
// A entrada contém vários casos de teste e termina com EOF (fim de arquivo. Cada caso de teste consiste de um valor inteiro ímpar N (5 ≤ N ≤ 101) que é o tamanho da matriz.

// Saída
// Para cada caso de teste, imprima a matriz correspondente conforme o exemplo abaixo. Após cada caso de teste, imprima uma linha em branco.

#include <stdio.h>

int main()
{
    int n, i, j, k, l, m, o, p, q, r, s, t, u, v, w, x, y, z;
    while (scanf("%d", &n) != EOF)
    {
        int matriz[n][n];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                matriz[i][j] = 0;
        }
        for (k = 0; k < n; k++)
        {
            for (l = 0; l < n; l++)
            {
                if (k == 0 || k == n - 1 || l == 0 || l == n - 1)
                    matriz[k][l] = 0;
            }
        }
        for (m = n / 3; m < n - n / 3; m++)
        {
            for (o = n / 3; o < n - n / 3; o++)
            {
                matriz[m][o] = 1;
            }
        }
        for (p = 0; p < n; p++)
        {
            for (q = 0; q < n; q++)
            {
                if (p == q)
                    matriz[p][q] = 2;
            }
        }
        for (r = 0; r < n; r++)
        {
            for (s = 0; s < n; s++)
            {
                if (r + s == n - 1)
                    matriz[r][s] = 3;
            }
        }
        for (t = 0; t < n; t++)
        {
            for (u = 0; u < n; u++)
            {
                if (t == n / 2 && u == n / 2)
                    matriz[t][u] = 4;
            }
        }
        for (v = 0; v < n; v++)
        {
            for (w = 0; w < n; w++)
            {
                printf("%d", matriz[v][w]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}