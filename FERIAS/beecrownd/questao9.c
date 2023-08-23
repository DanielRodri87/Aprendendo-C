#include <stdio.h>

int main()
{
    int n, i, j, k, maior, cont;
    char v[10000][1000];
    scanf("%d", &n);
    while (n != 0)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%s", v[i]);
        }
        maior = 0;
        for (i = 0; i < n; i++)
        {
            cont = 1;
            for (j = i + 1; j < n; j++)
            {
                if (v[i][0] == v[j][0])
                {
                    k = 1;
                    while (v[i][k] != '\0' && v[j][k] != '\0' && v[i][k] == v[j][k])
                    {
                        k++;
                    }
                    if (v[i][k] == '\0')
                    {
                        cont++;
                    }
                }
            }
            if (cont > maior)
            {
                maior = cont;
            }
        }
        printf("%d\n", maior);
        scanf("%d", &n);
    }
    return 0;
}