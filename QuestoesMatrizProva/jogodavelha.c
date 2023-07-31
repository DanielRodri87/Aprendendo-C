#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char jogovelha[3][3], play1name[50], play2name[50];
    int l, c, cont = 0;
    bool play1 = true, play2 = false;

    printf("\n\n-------------- Jogo da Velha ----------\n\n");
    printf("_00_ | _01_ | _02_\n");
    printf("------------------\n");
    printf("_10_ | _11_ | _12_\n");
    printf("------------------\n");
    printf("_20_ | _21_ | _22_\n");
    printf("\n\n");

    printf("O menu acima mostra o valor a ser digitado");
    printf("\n\n");

    printf("Digite o nome do primeiro jogador: ");
    scanf("%s", play1name);
    printf("Digite o nome do segundo jogador: ");
    scanf("%s", play2name);

    while (play1 || play2)
    {
        printf("Digite a linha e a coluna: ");
        scanf("%d %d", &l, &c);

        if (l < 0 || l > 2 || c < 0 || c > 2)
        {
            printf("Posição inválida! Digite novamente.\n");
            continue;
        }

        if (jogovelha[l][c] == 'X' || jogovelha[l][c] == 'O')
        {
            printf("Essa posição já está ocupada! Digite novamente.\n");
            continue;
        }

        if (play1)
        {
            printf("Vez do jogador %s\n", play1name);
            jogovelha[l][c] = 'X';
            play1 = false;
            play2 = true;
        }
        else
        {
            printf("Vez do jogador %s\n", play2name);
            jogovelha[l][c] = 'O';
            play1 = true;
            play2 = false;
        }

        cont++;
    }

    // Resto do código...
    // (você pode adicionar aqui a lógica para verificar se alguém ganhou o jogo)

    return 0;
}
