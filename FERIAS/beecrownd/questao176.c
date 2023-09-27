#include <stdio.h>

int main()
{
    int n, i, h, pico;

    while (scanf("%d", &n) && n != 0)
    {
        pico = 0;
        scanf("%d", &h);
        for (i = 1; i < n; i++)
        {
            if (h > 0 && h > pico)
                pico = h;
            else if (h < 0 && h < pico)
                pico = h;
            scanf("%d", &h);
        }
        if (h > 0 && h > pico)
            pico = h;
        else if (h < 0 && h < pico)
            pico = h;
        printf("%d\n", pico);
    }

    return 0;
}

