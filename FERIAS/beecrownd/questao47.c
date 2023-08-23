
#include <stdio.h>

int main()
{
    int n, x, y, i, soma;
    scanf("%d", &n);
    while (n > 0)
    {
        scanf("%d %d", &x, &y);
        soma = 0;
        if (x > y)
        {
            for (i = y + 1; i < x; i++)
            {
                if (i % 2 != 0)
                {
                    soma += i;
                }
            }
        }
        else
        {
            for (i = x + 1; i < y; i++)
            {
                if (i % 2 != 0)
                {
                    soma += i;
                }
            }
        }
        printf("%d\n", soma);
        n--;
    }
    
    return 0;
}