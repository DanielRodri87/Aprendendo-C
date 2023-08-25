#include <stdio.h>

int main()
{
    int n, h, m, o, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &h, &m, &o);
        if (h < 10 && m < 10)
        {
            printf("0%d:0%d - ", h, m);
        }
        else if (h < 10 && m >= 10)
        {
            printf("0%d:%d - ", h, m);
        }
        else if (h >= 10 && m < 10)
        {
            printf("%d:0%d - ", h, m);
        }
        else
        {
            printf("%d:%d - ", h, m);
        }
        if (o == 0)
        {
            printf("A porta fechou!\n");
        }
        else
        {
            printf("A porta abriu!\n");
        }
    }
    return 0;
}