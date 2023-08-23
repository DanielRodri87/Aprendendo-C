#include <stdio.h>

int main()
{
    int vetoridades[1000], soma = 0, i = 0, cont = 0;
    float media = 0;
    for (i = 0; i < 1000; i++)
    {
        scanf("%d", &vetoridades[i]);
        if (vetoridades[i] < 0)
        {
            break;
        }
        soma += vetoridades[i];
        cont++;
    }
    media = (float)soma / cont;
    printf("%.2f\n", media);
    return 0;
}