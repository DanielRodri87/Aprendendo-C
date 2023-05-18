
// Quantos DVD's tem a locadora
// Se o cliente atrasar: multa 10%
// 1/3 dos DVD's são alugados por mÊs
// 1/10 dos dvds são alugados
// 2% dos DVD's estragam por mÊs
//  e dos 2% 1/10 são repostos

#include <stdio.h>
int main(){
    float dvd, valor, multa, alugados, devolvidos, faturamento_mensal, faturamento_anual;

    printf("Digite a quantidade de DVD's: ");
    scanf("%f", &dvd);
    printf("Digite o valor do aluguel: ");
    scanf("%f", &valor);

    alugados = dvd / 3;
    devolvidos = alugados / 10;
    multa = alugados * 0.1;

    faturamento_anual = (alugados * valor * 12) + (devolvidos * multa * 12);

    printf("O faturamento anual é: %.1f", faturamento_anual);



    return 0;
}