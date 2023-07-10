// Programa irá desenha um triangulo, um quadrado ou um retangulo, dependendo da escolha do usuário

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int opcao;
    int i, j;
    int linhas = 5, colunas = 8;

    printf("Escolha uma opcao:\n");
    printf("1 - Triangulo\n");
    printf("2 - Quadrado\n");
    printf("3 - Retangulo\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        for (i = 1; i <= linhas; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 2:

        for (i = 1; i <= linhas; i++)
        {
            for (j = 1; j <= linhas; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 3:

        for (i = 1; i <= linhas; i++)
        {
            for (j = 1; j <= colunas; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}