#include <stdio.h>

int main()
{
    int n, i, t, a = 0, b = 1, c;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            printf("Fib(%d) = %d\n", n, a);
        }
        else if (n == 1)
        {
            printf("Fib(%d) = %d\n", n, b);
        }
        else
        {
            for (i = 2; i <= n; i++)
            {
                c = a + b;
                a = b;
                b = c;
            }
            printf("Fib(%d) = %d\n", n, c);
            a = 0;
            b = 1;
        }
    }
    return 0;
}