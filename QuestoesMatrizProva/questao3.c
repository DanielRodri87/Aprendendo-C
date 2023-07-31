// Jogo da velha
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int jogovelha[3][3], l, c, play1name, play2name, play1 = "true", play2 = "false", cont = 0;
    printf("\n\n-------------- Jogo da Velha ----------\n\n");
    printf("_00_ | _01_ | _02_\n");
    printf("------------------\n");
    printf("_10_ | _11_ | _12_\n");
    printf("------------------\n");
    printf("_20_ | _21_ | _22_\n");
    printf("\n\n");

    printf("O menu acima mostra o valor a ser digitado");
    printf("\n\n");

    // Definindo player
    printf("Digite o nome do primeiro jogador: ");
    scanf("%s", &play1name);
    printf("Digite o nome do segundo jogador: ");
    scanf("%s", &play2name);

    return 0;
}