#include <stdio.h>
#include <string.h>
int main()
{
    int guias, acoes, i;
    char acao[6];
    scanf("%d %d", &guias, &acoes);

    for (i = 0; i < acoes; i++)
    {
        scanf("%s", acao);
        if (strcmp(acao, "fechou") == 0)
        {
            guias+=2;
            continue;
        } else if (strcmp(acao, "fechou") == 0)
        {
            guias--;
            continue;
        }
    }
    printf("%d\n", guias);
    return 0;
}