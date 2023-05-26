#include <stdio.h>

int main() {
    float dvds, valor, faturamento, qtd_total;

    printf("Informe a quantidade de DVDs da locadora: ");
    scanf("%f", &dvds);

    printf("Informe o valor do aluguel por DVD: ");
    scanf("%f", &valor);

    float estragados = (dvds * 0.02);
    float repostos = estragados / 10;
    qtd_total = dvds + repostos;

    faturamento = (dvds / 3) * valor * 12 * 1.1;

    printf("O faturamento anual da locadora é: %.2f\n", faturamento);
    printf("Quantidade de DVDs após um ano: %.0f\n", qtd_total);

    return 0;
}
