#include <stdio.h>

int main ()
{
    int questao1, qtd, i;
    scanf("%d", &qtd);
    scanf("%d", &questao1);
    printf("resposta 1: %d\n", questao1);
    for (i = 1; i < qtd; i++)
    {
        printf("resposta %d: %d\n", i+1, questao1+10);
        questao1 += 10;
    }
    return 0 ;
}