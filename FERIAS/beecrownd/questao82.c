#include <stdio.h>

int main()
{
    int x, y, i, j, k = 0;
    scanf("%d %d", &x, &y);
    for (i = 1; i <= y; i++)
    {
        printf("%d", i);
        k++;
        if (k == x)
        {
            printf("\n");
            k = 0;
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}