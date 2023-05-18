#include <stdio.h>

int main() {
    int quantidadeDvds;
    float valorAluguel;

    printf("Informe a quantidade de DVDs da locadora: ");
    scanf("%d", &quantidadeDvds);

    printf("Informe o valor do aluguel: ");
    scanf("%f", &valorAluguel);

    int dvdsAlugadosMes = quantidadeDvds / 3;
    int dvdsDevolvidosMes = dvdsAlugadosMes / 10;

    float faturamentoMensal = dvdsAlugadosMes * valorAluguel;
    float faturamentoAnual = faturamentoMensal * 12;

    float multaAtraso = faturamentoMensal * 0.1;

    int dvdsEstragadosMes = quantidadeDvds * 0.02;
    int dvdsRepostosMes = dvdsEstragadosMes / 10;

    int quantidadeTotalDvds = quantidadeDvds + (dvdsRepostosMes * 12);

    printf("\nFaturamento anual: R$ %.2f\n", faturamentoAnual);
    printf("Quantidade total de DVDs após um ano: %d\n", quantidadeTotalDvds);

    return 0;
}
