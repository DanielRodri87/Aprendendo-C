#include <stdio.h>
#define tam 3
int main()
{
    char vetPaula[tam];
    int n1, n2, i = 0, qtd;
    scanf("%d", &qtd);
    while (i < qtd)
    {
        scanf("%s", vetPaula);
        n1 = vetPaula[0] - '0';
        n2 = vetPaula[2] - '0';
        if (vetPaula[0] != vetPaula[2])
        {
            if (vetPaula[1] >= 'a' && vetPaula[1] <= 'z')
            {
                printf("%d\n", n1 + n2);
            } else
            {
                printf("%d\n", n2 - n1);
            }
        } else
        {
            printf("%d\n", n1 * n2);
        }
        i++;
    }
    return 0;
}