#include <stdio.h>

int main()
{
    int casos, n1, n2, i, j, k, l, m, soma, par = 0, impar = 0;
    char jogador1[100], jogador2[100], escolha1[100], escolha2[100];

    scanf("%d", &casos);

    for (i = 0; i < casos; i++)
    {
        scanf("%s %s %s %s %d %d", jogador1, escolha1, jogador2, escolha2, &n1, &n2);

        soma = n1 + n2;

        if (soma % 2 == 0)
        {
            if (escolha1[0] == 'P')
            {
                printf("%s\n", jogador1);
            }
            else
            {
                printf("%s\n", jogador2);
            }
        }
        else
        {
            if (escolha1[0] == 'I')
            {
                printf("%s\n", jogador1);
            }
            else
            {
                printf("%s\n", jogador2);
            }
        }
    }

    return 0;
}