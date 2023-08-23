
#include <stdio.h>

int main()
{
    int m, n, i, soma;

    while (1)
    {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0)
        {
            break;
        }
        else
        {
            soma = 0;
            if (m > n)
            {
                for (i = n; i <= m; i++)
                {
                    printf("%d ", i);
                    soma += i;
                }
                printf("Sum=%d\n", soma);
            }
            else
            {
                for (i = m; i <= n; i++)
                {
                    printf("%d ", i);
                    soma += i;
                }
                printf("Sum=%d\n", soma);
            }
        }
    }

    return 0;
}