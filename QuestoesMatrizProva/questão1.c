// Vetor:

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int vetor[10], maior = 0, i;
    for (i=0;i<10;i++)
    {
        printf("Informe o %d valor inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i=0;i<10;i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("O maior valor eh: %d", maior);
    return 0;
}