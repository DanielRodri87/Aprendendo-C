#include <stdio.h>

int main()
{
    int a, b, c;
    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        scanf("%d %d", &b, &c);
        printf("%d\n", (int) sqrt((a * b * 100) / c));
    }
    return 0;
}