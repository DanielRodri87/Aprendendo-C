#include <stdio.h>

int main()
{
    int maior = 0, posicao = 0, i = 0, n;
    while (i < 100)
    {
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
            posicao = i;
        }
        i++;
    }
    {
        printf("%d\n", maior);
        printf("%d\n", posicao + 1);
    }
    
    return 0;
}