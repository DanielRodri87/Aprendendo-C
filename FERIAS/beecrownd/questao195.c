#include <stdio.h>
#include <string.h>

int main()
{
    char jogo[3];
    int coutx = 0, couto = 0, i;
    scanf("%s", jogo);
    if (strcmp(jogo[0], "O") == 0)
    {
        printf("?\n");
    } else 
    {
        if (strcmp(jogo[0], jogo[1]) != 0 || strcmp(jogo[1], jogo[2]) != 0)
        {
            printf("*\n");
        } else
        {
            for (i=0;i<3;i++)
            {
                if (strcmp(jogo[i], 'X') == 0)
                {
                    coutx++;
                } else
                {
                    couto++;
                }
            }
            if (coutx > couto)
            {
                printf("Alice\n");
            } else
            {
                printf("Bob\n");
            }
        }
    }

    return 0;
}