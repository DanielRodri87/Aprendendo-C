/* Você está planejando uma viagem de férias e deseja calcular os custos estimados.
Escreva um programa em C que solicite ao usuário o número de dias da viagem, o custo estimado com hospedagem por dia
e o custo estimado com alimentação por dia.
Em seguida, o programa deve calcular e exibir o custo total estimado da viagem. */

#include <stdio.h>

int main()
{
    int qtdviagens, hotel, alimentacao, dias, total;
    printf("Em quantos lugares voce vai viajar? ");
    scanf("%d", &qtdviagens);

    int viagens[qtdviagens][5];
    for (int i = 0; i < qtdviagens; i++)
    {
        printf("Digite o numero de dias da viagem %d: ", i+1);
        scanf("%d", &viagens[i][0]);
        printf("Digite o custo estimado com hospedagem por dia %d: ", i+1);
        scanf("%d", &viagens[i][1]);
        printf("Digite o custo estimado com alimentacao por dia %d: ", i+1);
        scanf("%d", &viagens[i][2]);
    }
    for (int i = 0; i < qtdviagens; i++)
    {
        dias = viagens[i][0];
        hotel = viagens[i][1];
        alimentacao = viagens[i][2];
        total = (dias * hotel) + (dias * alimentacao);
        printf("O custo total estimado da viagem %d e: %d\n", i+1 , total);
    }


    return 0;
}