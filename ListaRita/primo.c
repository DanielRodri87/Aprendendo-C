#include <stdio.h>

int main()
{
    int num, i, cont = 0;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        printf("primo");
    } else
    {
        printf("nao primo");
    }

    return 0;
}