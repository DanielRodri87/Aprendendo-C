#include <stdio.h>

int main()
{
    float n1, n2;
    int i = 0;
    while (i < 2)
    {
        scanf("%f", &n1);
        if (n1 >= 0 && n1 <= 10)
        {
            i++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    i = 0;
    while (i < 2)
    {
        scanf("%f", &n2);
        if (n2 >= 0 && n2 <= 10)
        {
            i++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", (n1 + n2) / 2);
    return 0;
}