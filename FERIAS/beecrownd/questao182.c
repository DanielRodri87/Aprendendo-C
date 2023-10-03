#include <stdio.h>

int main()
{
    char rosaventos[4] = {'N', 'L', 'S', 'O'};
    char n;
    int i, posicao = 0, qtd;
    scanf("%d", &qtd);
    
    if (qtd == 0)
    {
        for (i = 0; i < 4; i++)
        {
            rosaventos[i] = '?'; // Substituir o valor do vetor por '?'
        }
    }
    else
    {
        for (i = 0; i < qtd; i++)
        {
            scanf(" %c", &n);
            if (n == 'D')
            {
                posicao++;
                if (posicao > 3)
                {
                    posicao = 0;
                }
            }
            else if (n == 'E')
            {
                posicao--;
                if (posicao < 0)
                {
                    posicao = 3;
                }
            }
        }
    }

    printf("%c\n", rosaventos[posicao]);
    return 0;
}
