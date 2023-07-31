#include <stdio.h>
#include <string.h>


/*Você trabalha em uma locadora de filmes e precisa criar um programa em C para registrar as informações dos clientes e dos
filmes alugados. O programa deve permitir ao usuário cadastrar até 5 clientes, solicitando nome, CPF e telefone de cada um.
Em seguida, deve permitir cadastrar até 5 filmes, com nome, gênero e ano de lançamento. Por fim,
exiba a lista de clientes e filmes cadastrados.*/

int main()
{
    char nome[5][50], genero[5][50];

    int i, ano[5], cpf[5], telefone[5];

    for (i = 0; i < 5; i++) //cadastro cliente
    {
        printf("Digite o nome do cliente: ");
        scanf("%s", &nome[i]);
        printf("Digite o CPF do cliente: ");
        scanf("%d", &cpf[i]);
        printf("Digite o telefone do cliente: ");
        scanf("%d", &telefone[i]);
    }

    for (i = 0; i < 5; i++) //cadastro filme
    {
        printf("Digite o nome do filme: ");
        scanf("%s", &nome[i]);
        printf("Digite o genero do filme: ");
        scanf("%s", &genero[i]);
        printf("Digite o ano de lancamento do filme: ");
        scanf("%d", &ano[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Nome do cliente: %s\n", nome[i]);
        printf("CPF do cliente: %d\n", cpf[i]);
        printf("Telefone do cliente: %d\n", telefone[i]);
    }

    return 0;
}