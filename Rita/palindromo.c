#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50], nome2[50];
    int i;

    printf("Informe um nome para consultar se eh palindromo: ");
    gets(nome);


    for (i = 0; i < strlen(nome); i++)
    {
        nome2[i] = nome[strlen(nome) - i - 1];
    }

    nome2[i] = '\0';

    if (strcmp(nome, nome2) == 0)
    {
        printf("O nome %s eh palindromo", nome);
    }
    else
    {
        printf("O nome %s nao eh palindromo", nome);
    }
    return 0;
}