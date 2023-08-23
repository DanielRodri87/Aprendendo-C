#include <stdio.h>

int main()
{
    int n, i, j, k = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = k; j < k + 3; j++)
        {
            printf("%d ", j);
        }
        printf("PUM\n");
        k += 4;
    }

    return 0;
}