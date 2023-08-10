#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 100

typedef struct
{
    char modelo[50];
    char defeito[50];
    char dataEntrada[50];
    char consertado[50];
    float valorConserto;
} Notebook;


void cadastrarNotebook(Notebook notebook[], int *qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- CADASTRAR NOTEBOOK -- ==================================");

    printf("\n\n");

    if (*qtdNotebooks >= TAM)
    {
        printf("Limite de cadastros atingido!\n");
        return;
    }

    printf("Digite o modelo do notebook: ");
    fflush(stdin);
    gets(notebook[*qtdNotebooks].modelo);

    printf("Digite o defeito do notebook: ");
    fflush(stdin);
    gets(notebook[*qtdNotebooks].defeito);

    printf("Digite a data de entrada do notebook: ");
    fflush(stdin);
    gets(notebook[*qtdNotebooks].dataEntrada);

    printf("Digite se o notebook foi consertado (Sim/Nao): ");
    fflush(stdin);
    gets(notebook[*qtdNotebooks].consertado);

    printf("Digite o valor do conserto do notebook: ");
    scanf("%f", &notebook[*qtdNotebooks].valorConserto);

    (*qtdNotebooks)++;
    system("pause");
}

// Função para listar os notebooks
void listarNotebooks(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- LISTAR NOTEBOOKS -- ==================================");
    printf("\n\n");

    if (qtdNotebooks == 0)
    {
        printf("Nenhum notebook cadastrado!\n");
        system("pause");
        return;
    }

    for (int i = 0; i < qtdNotebooks; i++)
    {
        printf("Modelo: %s\n", notebook[i].modelo);
        printf("Defeito: %s\n", notebook[i].defeito);
        printf("Data de entrada: %s\n", notebook[i].dataEntrada);
        printf("Consertado: %s\n", notebook[i].consertado);
        printf("Valor do conserto: %.2f\n", notebook[i].valorConserto);
        printf("\n\n");
    }
    system("pause");
}

// Função para pesquisar um notebook pelo primeiro nome do modelo
void pesquisarNotebook(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- PESQUISAR NOTEBOOK -- ==================================");

    printf("\n\n");

    char modelo[50];
    printf("Digite o modelo do notebook: ");
    fflush(stdin);
    gets(modelo);

    int encontrado = 0; 

    for (int i = 0; i < qtdNotebooks; i++)
    {
        // Verifica se a palavra pesquisada está contida no modelo do notebook
        if (strstr(notebook[i].modelo, modelo) != NULL)
        {
            printf("Modelo: %s\n", notebook[i].modelo);
            printf("Defeito: %s\n", notebook[i].defeito);
            printf("Data de entrada: %s\n", notebook[i].dataEntrada);
            printf("Consertado: %s\n", notebook[i].consertado);
            printf("Valor do conserto: %.2f\n", notebook[i].valorConserto);
            printf("\n\n");

            encontrado = 1; 
        }
    }

    if (encontrado == 0)
    {
        printf("Notebook nao encontrado!\n");
    }
    system("pause");
}


void atualizarNotebook(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- ATUALIZAR DADOS -- ==================================");
    printf("\n\n");

    char modelo[50];
    printf("Digite o modelo (exatamente igual) do notebook: ");
    fflush(stdin);
    gets(modelo);


    int encontrado = 0; // Variável para indicar se o notebook foi encontrado

    for (int i = 0; i < qtdNotebooks; i++)
    {
        if (strcmp(notebook[i].modelo, modelo) == 0)
        {
            printf("Valor anterior: %s\n", notebook[i].modelo);
            printf("Digite o novo modelo do notebook: ");
            fflush(stdin);
            gets(notebook[i].modelo);

            printf("Valor anterior: %s\n", notebook[i].defeito);
            printf("Digite o novo defeito do notebook: ");
            fflush(stdin);
            gets(notebook[i].defeito);

            printf("Valor anterior: %s\n", notebook[i].dataEntrada);
            printf("Digite a nova data de entrada do notebook: ");
            fflush(stdin);
            gets(notebook[i].dataEntrada);

            printf("Valor anterior: %s\n", notebook[i].consertado);
            printf("Digite se o notebook foi consertado (Sim/Nao): ");
            fflush(stdin);
            gets(notebook[i].consertado);
        
            printf("Valor anterior: %.2f\n", notebook[i].valorConserto);
            printf("Digite o novo valor do conserto do notebook: ");
            scanf("%f", &notebook[i].valorConserto);

            encontrado = 1; 
            return;
        }
    }

    if (encontrado == 0)
    {
        printf("Notebook nao encontrado!\n");
    }
    system("pause");
}

// Função para listar os notebooks que ainda nao foram consertados
void listarNotebooksNaoConsertados(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("=========================== -- LISTAR NOTEBOOK NAO CONSERTADOS -- ===========================");
    printf("\n\n");

    int encontrados = 0;
    for (int i = 0; i < qtdNotebooks; i++)
    {
        if (strcmp(notebook[i].consertado, "Nao") == 0)
        {
            printf("Modelo: %s\n", notebook[i].modelo);
            printf("Defeito: %s\n", notebook[i].defeito);
            printf("Data de entrada: %s\n", notebook[i].dataEntrada);
            printf("Consertado: %s\n", notebook[i].consertado);
            printf("Valor do conserto: %.2f\n", notebook[i].valorConserto);
            printf("\n\n");
            encontrados++;
        }
    }

    if (encontrados == 0)
    {
        printf("Nenhum notebook nao consertado encontrado!\n");

    }
    system("pause");
}

// Função para listar os notebooks que já foram consertados
void listarNotebooksConsertados(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("============================= -- LISTAR NOTEBOOK CONSERTADOS -- =============================");
    printf("\n\n");

    int encontrados = 0;
    for (int i = 0; i < qtdNotebooks; i++)
    {
        if (strcmp(notebook[i].consertado, "Sim") == 0)
        {
            printf("Modelo: %s\n", notebook[i].modelo);
            printf("Defeito: %s\n", notebook[i].defeito);
            printf("Data de entrada: %s\n", notebook[i].dataEntrada);
            printf("Consertado: %s\n", notebook[i].consertado);
            printf("Valor do conserto: %.2f\n", notebook[i].valorConserto);
            printf("\n\n");
            encontrados++;
        }
    }

    if (encontrados == 0)
    {
        printf("Nenhum notebook consertado encontrado!\n");

    }
    system("pause");
}

// Função para gerar um relatório
void gerarRelatorio(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- GERAR RELATORIO -- ==================================");
    printf("\n\n");

    float valorTotal = 0;

    for (int i = 0; i < qtdNotebooks; i++)
    {
        valorTotal += notebook[i].valorConserto;
    }

    printf("Valor total dos consertos: %.2f\n", valorTotal);
    system("pause");
    printf("\n\n");
}

// Função que atualizar apenas o status de conserto
void atualizarStatusConserto(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- ATUALIZAR STATUS DE CONSERTO -- ==================================");
    printf("\n\n");

    char modelo[50];
    printf("Digite o modelo (exatamente igual) do notebook: ");
    fflush(stdin);
    gets(modelo);

    int encontrado = 0; 

    for (int i = 0; i < qtdNotebooks; i++)
    {
        if (strcmp(notebook[i].modelo, modelo) == 0)
        {
            printf("Status Atual: %s\n", notebook[i].consertado);
            system("pause");
            printf("Digite se o notebook foi consertado ou nao (Sim/Nao): ");
            fflush(stdin);
            gets(notebook[i].consertado);
            encontrado = 1; 
            return;
        }
    }

    if (encontrado == 0)
    {
        printf("Notebook nao encontrado!\n");
    }
    system("pause");
}


int main()
{
    Notebook notebook[TAM];
    int qtdNotebooks = 0;
    int opcao;

    do
    {
        system("cls");
        printf("\n\n");
        printf("================================================================================\n");
        printf("===================================== ---- =====================================\n");
        printf("================================== -- MENU -- ==================================\n");
        printf("============================== -- DANITECNOLOGY -- =============================\n");
        printf("============================= --------------------- ============================\n");
        printf("================================================================================\n");

        printf("\n\n");

        printf("1 - Cadastrar notebook\n");
        printf("2 - Listar notebooks\n");
        printf("3 - Pesquisar notebook\n");
        printf("4 - Atualizar notebook\n");
        printf("5 - Listar notebooks nao consertados\n");
        printf("6 - Listar notebooks consertados\n");
        printf("7 - Gerar relatorio de lucros\n");
        printf("8 - Atualizar Status de Conserto\n");
        printf("9 - Sair\n");
        printf("\n\n");

        printf("Digite a opcao desejada: ");
        fflush(stdin);

        char buffer[100];
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            printf("Erro na leitura da opcao.\n");
            system("pause");
            continue;
        }

        // Remover a quebra de linha do buffer de entrada
        buffer[strcspn(buffer, "\n")] = '\0';

        if (sscanf(buffer, "%d", &opcao) != 1) 
        {
            printf("Opcao Invalida! Digite um numero entre 1 e 9.\n");
            system("pause");

            continue;
        }
        // Verifica se a opcao é válida
        if (opcao < 1 || opcao > 9)
        {
            printf("Opcao Invalida! Digite um numero entre 1 e 9.\n");
            system("pause");
            continue;
        }

        switch (opcao)
        {
        case 1:
            cadastrarNotebook(notebook, &qtdNotebooks);
            break;
        case 2:
            listarNotebooks(notebook, qtdNotebooks);
            break;
        case 3:
            pesquisarNotebook(notebook, qtdNotebooks);
            break;
        case 4:
            atualizarNotebook(notebook, qtdNotebooks);
            break;
        case 5:
            listarNotebooksNaoConsertados(notebook, qtdNotebooks);
            break;
        case 6:
            listarNotebooksConsertados(notebook, qtdNotebooks);
            break;
        case 7:
            gerarRelatorio(notebook, qtdNotebooks);
            break;
        case 8:
            atualizarStatusConserto(notebook, qtdNotebooks);
            break;
        case 9:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opcao Invalida! Digite um numero entre 1 e 9.\n");
            break;
        }
    } while (opcao != 9);

    return 0;
}