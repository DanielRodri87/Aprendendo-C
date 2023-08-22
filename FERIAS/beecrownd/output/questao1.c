#include <stdio.h>

int main()
{
    int t, i, c = 0, x;
    scanf("%d", &t);
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if (x == t)
            c++;
    }
    printf("%d\n", c);

    return 0;
}