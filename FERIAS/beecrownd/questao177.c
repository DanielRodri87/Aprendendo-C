#include <stdio.h>

int main()
{
    int n, i, j, k, l, m, a, b, c, d, e, cont;

    while (scanf("%d", &n) && n != 0)
    {
        for (i = 0; i < n; i++)
        {
            cont = 0;
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
            if (a <= 127)
            {
                cont++;
            }
            if (b <= 127)
            {
                cont++;
            }
            if (c <= 127)
            {
                cont++;
            }
            if (d <= 127)
            {
                cont++;
            }
            if (e <= 127)
            {
                cont++;
            }
            if (cont == 1)
            {
                if (a <= 127)
                {
                    printf("A\n");
                }
                else if (b <= 127)
                {
                    printf("B\n");
                }
                else if (c <= 127)
                {
                    printf("C\n");
                }
                else if (d <= 127)
                {
                    printf("D\n");
                }
                else if (e <= 127)
                {
                    printf("E\n");
                }
            }
            else
            {
                printf("*\n");
            }
        }
    }

    return 0;
}