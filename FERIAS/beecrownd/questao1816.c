#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alfab[26] = "abcdefghijklmnopqrstuvwxyz";

    int m, i, j, k, aux, cont = 1;

    while (scanf("%d", &m) && m != 0)
    {
        int cod[m];

        for (i = 0; i < m; i++)
        {
            scanf("%d", &cod[i]);
        }

        printf("Instancia %d\n", cont);

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < 26; j++)
            {
                if (cod[i] == j + 1)
                {
                    printf("%c", alfab[j]);
                    aux = cod[i];
                    for (k = i; k > 0; k--)
                    {
                        cod[k] = cod[k - 1];
                    }
                    cod[0] = aux;
                }
            }
        }
        printf("\n\n");
        cont++;
    }

    return 0;
}