#include <stdio.h>

int main() {
    float quantidadeDVDs, valorAluguel, faturamentoAnual;
    float quantidadeAlugadosMes, quantidadeDevolvidos, quantidadeEstragados, quantidadeRepostos, quantidadeAlugadosMesMulta;
    float quantidadeDVDsAposUmAno;

    printf("Informe a quantidade de DVDs na locadora: ");
    scanf("%f", &quantidadeDVDs);

    printf("Informe o valor do aluguel por DVD: ");
    scanf("%f", &valorAluguel);

    quantidadeAlugadosMes = quantidadeDVDs / 3;
    quantidadeDevolvidos = quantidadeAlugadosMes * 0.1;

    quantidadeAlugadosMesMulta = quantidadeAlugadosMes * 0.9;

    faturamentoAnual = (quantidadeDevolvidos * valorAluguel) + (quantidadeAlugadosMesMulta * valorAluguel * 1.1) * 12;

    quantidadeEstragados = quantidadeDVDs * 0.02;
    quantidadeRepostos = quantidadeEstragados / 10;

    quantidadeDVDsAposUmAno = quantidadeDVDs + quantidadeRepostos * 12;

    printf("Faturamento anual da locadora: R$ %.2f\n", faturamentoAnual);
    printf("Quantidade total de DVDs após um ano: %.0f\n", quantidadeDVDsAposUmAno);

    return 0;
}
