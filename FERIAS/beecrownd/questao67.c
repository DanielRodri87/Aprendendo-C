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