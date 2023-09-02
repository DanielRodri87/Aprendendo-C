#include <stdio.h>

int main()
{
    int casos, r1, r2, i;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++)
    {
        scanf("%d %d", &r1, &r2);

        printf("%d\n", r1 + r2);
    }

    return 0;
}