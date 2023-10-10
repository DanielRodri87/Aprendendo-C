#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam[100];
    char pes[100];
    int i = 0, par_corretos = 0;
    while (scanf("%d %c", &tam[i], &pes[i]) != EOF)
    {
        for (int j = 0; j < i; j++)
        {
            if (tam[i] == tam[j] && pes[i] != pes[j])
            {
                par_corretos++;
            }
            else if (tam[i] != tam[j] && pes[i] == pes[j])
            {
                par_corretos++;
            }
        }
    }
    printf("%d\n", par_corretos);

    return 0;
}