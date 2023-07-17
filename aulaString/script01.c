#include <stdio.h>
#include <string.h>

int ex1()
{
    // Ao decarar uma varíavel char nome[10] estou declarando um vetor de 10 posições [ J | O | Ã | O | | | | | | |]

    char nome[10]; // Declaração de um vetor de 10 posições
    printf("A 3° letra do nome é: %c\n", nome[2]); // Exibir a 3° letra do meu nome
    printf("O nome é %s", nome);

    return 0;
}

int ex2()
{
    // ao declarar char nomes [10][100]; estou declarando uma matriz de 10 linhas e 100 colunas
    // char nomes[10][100]; Declaração de uma matriz de 10 linhas e 100 colunas
    char nome[100]; // Declaração de variável de 100 posições

    printf("Digite o nome: ");
    gets(nome); // Receber o nome do usuário

    // outras funções semelhantes: 
    // getch() --> Recebe um caractere do usuário: Pode ser interessantes para trabalhar com Menus
    // getche() --> Recebe um caractere do usuário e exibe na tela


    printf("O nome eh %s", nome); // Exibir o nome do usuário



    return 0;
}

int main()
{
    // Vetor de nomes = 5
    // Matriz de notas = 3 + 1 média
    // Quero saber o nome de quem foi aprovado e a média

    char nomes[5][100];
    float notas[5][3], media;
    int l, c;

    for (l=0; l<5; l++)
    {
        printf("Digite o nome do %d aluno: ", l+1);
        gets(nomes[l]);
        for (c = 0; c<3; c++)
        {
            printf("Digite a %d nota do %d aluno: ", c+1, l+1);
            scanf("%f", &notas[l][c]);
        }
        getchar();
    }

    for (l = 0; l <5; l++)
    {
        media = 0;
        for(c = 0; c < 3; c++)
        {
            media += notas[l][c];
        }
        media /= 3;
        if (media >= 7)
        {
            printf("O aluno %s foi aprovado com media %.2f\n", nomes[l], media);
        }
    }

    return 0;
}