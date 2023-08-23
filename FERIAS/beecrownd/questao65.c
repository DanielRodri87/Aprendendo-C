#include <stdio.h>

int main()
{
    int vetor[20], n, i = 0, j = 20;
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        n = vetor[i];
        vetor[i] = vetor[j-1];
        vetor[j-1] = n;
        j--;
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}