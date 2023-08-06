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

    printf("Digite se o notebook foi consertado (Sim/Não): ");
    fflush(stdin);
    gets(notebook[*qtdNotebooks].consertado);

    printf("Digite o valor do conserto do notebook: ");
    scanf("%f", &notebook[*qtdNotebooks].valorConserto);

    (*qtdNotebooks)++;
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

    int encontrado = 0; // Variável para indicar se o notebook foi encontrado

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

    if (!encontrado)
    {
        printf("Notebook nao encontrado!\n");
    }
}


void atualizarNotebook(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- ATUALIZAR DADOS -- ==================================");
    printf("\n\n");

    char modelo[50];
    printf("Digite o modelo do notebook: ");
    fflush(stdin);
    gets(modelo);

    int encontrado = 0; // Variável para indicar se o notebook foi encontrado

    for (int i = 0; i < qtdNotebooks; i++)
    {
        if (strcmp(notebook[i].modelo, modelo) == 0)
        {
            printf("Digite o novo modelo do notebook: ");
            fflush(stdin); // Limpa o buffer de entrada
            gets(notebook[i].modelo);

            printf("Digite o novo defeito do notebook: ");
            fflush(stdin);
            gets(notebook[i].defeito);

            printf("Digite a nova data de entrada do notebook: ");
            fflush(stdin);
            gets(notebook[i].dataEntrada);

            printf("Digite se o notebook foi consertado ou não: ");
            fflush(stdin);
            gets(notebook[i].consertado);

            printf("Digite o novo valor do conserto do notebook: ");
            scanf("%f", &notebook[i].valorConserto);

            encontrado = 1; // Marca que o notebook foi encontrado
            return;
        }
    }

    if (!encontrado)
    {
        printf("Notebook não encontrado!\n");
    }
}

// Função para excluir um notebook
void excluirNotebook(Notebook notebook[], int *qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- EXCLUIR NOTEBOOK -- ==================================");
    printf("\n\n");

    char modelo[50];
    printf("Digite o modelo do notebook: ");
    fflush(stdin);
    gets(modelo);

    int encontrado = 0; // Variável para indicar se o notebook foi encontrado

    for (int i = 0; i < *qtdNotebooks; i++)
    {
        if (strcmp(notebook[i].modelo, modelo) == 0)
        {
            for (int j = i; j < (*qtdNotebooks - 1); j++)
            {
                notebook[j] = notebook[j + 1];
            }
            (*qtdNotebooks)--;
            encontrado = 1; // Marca que o notebook foi encontrado
            printf("Notebook excluído com sucesso!\n");
            return;
        }
    }

    if (!encontrado)
    {
        printf("Notebook não encontrado!\n");
    }
}

// Função para listar os notebooks que ainda não foram consertados
void listarNotebooksNaoConsertados(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("=========================== -- LISTAR NOTEBOOK NAO CONSERTADOS -- ===========================");
    printf("\n\n");

    int encontrados = 0;
    for (int i = 0; i < qtdNotebooks; i++)
    {
        if (strcmp(notebook[i].consertado, "Não") == 0)
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
        printf("Nenhum notebook não consertado encontrado!\n");
    }
}

// Função para listar os notebooks que já foram consertados
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
}

// Função para gerar um relatório
void gerarRelatorio(Notebook notebook[], int qtdNotebooks)
{
    printf("\n\n");
    printf("================================== -- GERAR RELAToRIO -- ==================================");
    printf("\n\n");

    float valorTotal = 0;

    for (int i = 0; i < qtdNotebooks; i++)
    {
        valorTotal += notebook[i].valorConserto;
    }

    printf("Valor total dos consertos: %.2f\n", valorTotal);
    printf("\n\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Notebook notebook[TAM];
    int qtdNotebooks = 0;
    int opcao;

    do
    {
        printf("\n\n");
        printf("================================================================================\n");
        printf("===================================== ---- =====================================\n");
        printf("================================== -- MENU -- ==================================\n");
        printf("============================== -- DANITECNOLOGY -- =============================\n");
        printf("============================= --------------------- =============================\n");
        printf("================================================================================\n");

        printf("\n\n");

        printf("1 - Cadastrar notebook\n");
        printf("2 - Listar notebooks\n");
        printf("3 - Pesquisar notebook\n");
        printf("4 - Atualizar notebook\n");
        printf("5 - Excluir notebook\n");
        printf("6 - Listar notebooks nao consertados\n");
        printf("7 - Listar notebooks consertados\n");
        printf("8 - Gerar relatorio\n");
        printf("9 - Sair\n");
        printf("\n\n");

        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        while (getchar() != '\n'); 

        // Verifica se a opção é válida
        if (opcao < 1 || opcao > 9)
        {
            printf("Opção inválida! Digite um número entre 1 e 9.\n");
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
            excluirNotebook(notebook, &qtdNotebooks);
            break;
        case 6:
            listarNotebooksNaoConsertados(notebook, qtdNotebooks);
            break;
        case 7:
            listarNotebooksConsertados(notebook, qtdNotebooks);
            break;
        case 8:
            gerarRelatorio(notebook, qtdNotebooks);
            break;
        case 9:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção invalida!\n");
            break;
        }
    } while (opcao != 9);

    return 0;
}
