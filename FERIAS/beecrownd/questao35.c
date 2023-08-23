#include <stdio.h>

int main()
{
    int n, positivo = 0, i, soma = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            positivo++;
            soma+=n;
        }
    }
    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", (float)soma/positivo);

    return 0;
}