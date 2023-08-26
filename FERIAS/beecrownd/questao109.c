// Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez, bem como quantos desses saques, bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

// Entrada
// A entrada é dada pelo número de jogadores N (1 ≤ N ≤ 100), seguido pelo nome de cada um dos jogadores. Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha S, B e A (0 ≤ S,B,A ≤ 10000) representam a quantidade de tentativas de saques, bloqueios e ataques e na segunda linha, S1, B1 e A1 (0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

// Saída
// A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado no exemplo.

// Exemplo de Entrada	Exemplo de Saída

#include <stdio.h>

int main()
{
    int n, i, s, b, a, s1, b1, a1, ts = 0, tb = 0, ta = 0, ts1 = 0, tb1 = 0, ta1 = 0;
    float ps, pb, pa;

    scanf("%d", &n);

    char nome[n][100];

    for (i = 0; i < n; i++)
    {
        scanf("%s", nome[i]);
        scanf("%d %d %d", &s, &b, &a);
        scanf("%d %d %d", &s1, &b1, &a1);

        ts += s;
        tb += b;
        ta += a;
        ts1 += s1;
        tb1 += b1;
        ta1 += a1;
    }

    ps = (float)ts1 / ts * 100;
    pb = (float)tb1 / tb * 100;
    pa = (float)ta1 / ta * 100;

    printf("Pontos de Saque: %.2f %%.\n", ps);
    printf("Pontos de Bloqueio: %.2f %%.\n", pb);
    printf("Pontos de Ataque: %.2f %%.\n", pa);

    return 0;
}