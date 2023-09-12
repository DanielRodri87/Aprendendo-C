#include <stdio.h>

int main(void)
{
    int altura, canos, i, aux, aux2 = 0;
    scanf("%d %d", &altura, &canos);
    int vcanos[canos];

    for (i = 0; i < canos; i++)
    {
        scanf("%d", &vcanos[i]);
        if (i > 0)
        {
            aux = vcanos[i] - vcanos[i - 1];
            if (aux > altura || aux < -altura)
            {
                aux2++;
            }
        }
    }
    if (aux2>0)
    {
        printf("GAME OVER\n");
    } else
    {
        printf("YOU WIN\n");
    }

    return 0;
}