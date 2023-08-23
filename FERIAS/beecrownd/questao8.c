#include <stdio.h>

int main()
{
    int n, k, i, j, m, v[10000];
    scanf("%d %d", &n, &k);
    while (n != 0 && k != 0)
    {
        for (i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }
        i = 0;
        while (n > 1)
        {
            for (j = 1; j < k; j++)
            {
                if (i == n - 1)
                {
                    i = 0;
                }
                else
                {
                    i++;
                }
            }
            for (m = i; m < n - 1; m++)
            {
                v[m] = v[m + 1];
            }
            n--;
            if (i == n)
            {
                i = 0;
            }
        }
        printf("%d\n", v[0]);
        scanf("%d %d", &n, &k);
    }
    return 0;
}