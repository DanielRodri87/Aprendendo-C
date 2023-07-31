#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i;
    for (i=0;i<10;i++)
    {
        printf("Informe o %d valor inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int menor = vetor[0];
    for (i=0;i<10;i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("O menor valor eh: %d", menor);
    return 0;
}