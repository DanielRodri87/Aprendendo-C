#include <stdio.h>

int main()
{
    int inter, gremio, grenais = 0, vitorias_inter = 0, vitorias_gremio = 0, empates = 0, repetir = 1;
    while (repetir == 1)
    {
        scanf("%d %d", &inter, &gremio);
        grenais++;
        if (inter > gremio)
        {
            vitorias_inter++;
        }
        else if (inter < gremio)
        {
            vitorias_gremio++;
        }
        else
        {
            empates++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &repetir);
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitorias_inter);
    printf("Gremio:%d\n", vitorias_gremio);
    printf("Empates:%d\n", empates);
    if (vitorias_inter > vitorias_gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if (vitorias_inter < vitorias_gremio)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Nao houve vencedor\n");
    }
    return 0;
}