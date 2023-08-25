#include <stdio.h>

int main()
{
    int qtdprod, cod, qtd, i;
    float total = 0;

    scanf("%d", &qtdprod);
    for (i = 0; i < qtdprod; i ++)
    {
        scanf("%d %d", &cod, &qtd);
        switch (cod)
        {
            case 1001:
                total += 1.50 * qtd;
                break;
            case 1002:
                total += 2.50 * qtd;
                break;
            case 1003:
                total += 3.50 * qtd;
                break;
            case 1004:
                total += 4.50 * qtd;
                break;
            case 1005:
                total += 5.50 * qtd;
                break;
        }
    }
    printf("%.2f\n", total);

    return 0;
}