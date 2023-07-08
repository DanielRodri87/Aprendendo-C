#include <stdio.h>

int main() {

    int i, n, total=0, coelhos=0, ratos=0, sapos=0;
    char tipo;

    scanf("%d", &n);

    for (i=1;i<=n;i++){
        scanf("%d %c", &total, &tipo);
        if (tipo=='C')
            coelhos+=total;
        else if (tipo=='R')
            ratos+=total;
        else if (tipo=='S')
            sapos+=total;
    }

    printf("Total: %d cobaias\n", coelhos+ratos+sapos);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", (float)coelhos/(coelhos+ratos+sapos)*100);
    printf("Percentual de ratos: %.2f %%\n", (float)ratos/(coelhos+ratos+sapos)*100);
    printf("Percentual de sapos: %.2f %%\n", (float)sapos/(coelhos+ratos+sapos)*100);

    return 0;
}