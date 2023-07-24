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


// -------------------------------------------   PRATICAS ---------------------------------------------------

// Sem menu
int pratica1()
{

    char nomes[5][100]; // --> Vetor de nomes = 5 podendo cada nome ter até 100 caracteres
    float notas[5][3], media; // --> Matriz de notas = 3 + 1 média; media = Vai receber o valor dela lá embaixo
    int l, c; // Linhas e colunas do meu vetor

    for (l=0; l<5; l++)
    {
        printf("Digite o nome do %d aluno: ", l+1);
        gets(nomes[l]); // --> Recebe o nome do aluno e jogo no índice a partir do for: 1° Execução nome[0], 2° Execução nome[1] ... , 5° Execução nome[4]
        for (c = 0; c<3; c++)
        {
            printf("Digite a %d nota do %d aluno: ", c+1, l+1); // --> c+1 = 1° nota, c+2 = 2° nota, c+3 = 3° nota, l+1 = 1° aluno, l+2 = 2° aluno, l+3 = 3° aluno, l+4 = 4° aluno, l+5 = 5° aluno
            scanf("%f", &notas[l][c]); // --> Recebe a nota do aluno e jogo no índice a partir do for: 1° Execução notas[0][0], 2° Execução notas[0][1], 3° Execução notas[0][2], 4° Execução notas[1][0], 5° Execução notas[1][1], 6° Execução notas[1][2], 7° Execução notas[2][0], 8° Execução notas[2][1], 9° Execução notas[2][2], 10° Execução notas[3][0], 11° Execução notas[3][1], 12° Execução notas[3][2], 13° Execução notas[4][0], 14° Execução notas[4][1], 15° Execução notas[4][2]
        }
        getchar(); // Esse getchar usei porque estava enfrentando um bug que não deixava eu digitar o nome do aluno, então ele dá uma pausa e espera o usuário digitar o nome do aluno
    }

    for (l = 0; l <5; l++) // Laço responsável por ler a matriz e calcular a média
    {
        media = 0; // Toda vez que entro no for a média é zerada para cada aluno
        for(c = 0; c < 3; c++) // Laço responsável por ler as notas de cada aluno
        {
            media += notas[l][c]; // media = media + notas[l][c]: 
        }
        media /= 3; // media = media / 3:
        if (media >= 7)
        {
            printf("O aluno %s foi aprovado com media %.2f\n", nomes[l], media); // --> nomes[l] = nome do aluno a partir do índice do vetor, media = média do aluno
        }
    }

    return 0;
}

// Com menu não irei comentar, mas segue a mesma premissa do acima, mas com escolha de casos a partir do switch. Meio que dividi em blocos e coloquei em cada caso
int main()
{
    int opcao, l, c;
    char nomes[5][100];
    float notas[1][3], media;

    do
    {
        printf("1 - Cadastrar alunos\n");
        printf("2 - Exibir alunos aprovados\n");
        printf("3 - Exibir alunos\n");
        printf("4 - Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            for (l=0; l<1; l++)
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
            break;

        case 2:
            printf("Listar nomes dos alunos aprovados\n");
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
            break;
        case 3:
            printf("Listar nomes dos alunos\n");
            for (l = 0; l <5; l++)
            {
                media = 0;
                for(c = 0; c < 3; c++)
                {
                    media += notas[l][c];
                }
                media /= 3;
                printf("O aluno %s teve media %.2f\n", nomes[l], media);
            }
            break;

        case 4:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    } while (opcao != 4);
    
    return 0;
}