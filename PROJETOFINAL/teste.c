#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

struct Produto {
    char nome[50];
    char tipo[20];
    float preco;
    int quantidade;
};

struct Produto produtos[MAX_PRODUCTS];
int numProdutos = 0;

void inserirProduto() {
    if (numProdutos < MAX_PRODUCTS) {
        struct Produto novoProduto;

        printf("Nome do produto: ");
        scanf("%s", novoProduto.nome);

        printf("Tipo do produto (Camisa, Caneca, Almofada, Chaveiro): ");
        scanf("%s", novoProduto.tipo);

        printf("Preço do produto: ");
        scanf("%f", &novoProduto.preco);

        printf("Quantidade do produto: ");
        scanf("%d", &novoProduto.quantidade);

        produtos[numProdutos++] = novoProduto;
    } else {
        printf("Limite máximo de produtos atingido.\n");
    }
}

void mostrarProdutos() {
    printf("\n=== Produtos Cadastrados ===\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Nome: %s\n", produtos[i].nome);
        printf("Tipo: %s\n", produtos[i].tipo);
        printf("Preço: %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n\n", produtos[i].quantidade);
    }
}

void gerarRelatorioPorPalavraChave() {
    char keyword[50];
    printf("Digite a palavra-chave: ");
    scanf("%s", keyword);

    printf("\n=== Relatório por Palavra-Chave ===\n");
    for (int i = 0; i < numProdutos; i++) {
        if (strstr(produtos[i].nome, keyword) || strstr(produtos[i].tipo, keyword)) {
            printf("Nome: %s\n", produtos[i].nome);
            printf("Tipo: %s\n", produtos[i].tipo);
            printf("Preço: %.2f\n", produtos[i].preco);
            printf("Quantidade: %d\n\n", produtos[i].quantidade);
        }
    }
}

void atualizarQuantidadeProduto() {
    char nomeProduto[50];
    printf("Digite o nome do produto para atualizar a quantidade: ");
    scanf("%s", nomeProduto);

    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].nome, nomeProduto) == 0) {
            int novaQuantidade;
            printf("Nova quantidade: ");
            scanf("%d", &novaQuantidade);
            produtos[i].quantidade = novaQuantidade;
            printf("Quantidade atualizada com sucesso.\n");
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

void mostrarQuantidadeProdutos() {
    printf("Total de produtos cadastrados: %d\n", numProdutos);
}

void lucrosporproduto() {
    int opcaoLucro;

    printf("\n=== Lucro por Tipo de Produto ===\n");
    printf("1. Camisa\n");
    printf("2. Caneca\n");
    printf("3. Almofada\n");
    printf("4. Chaveiro\n");
    printf("Escolha um tipo de produto: ");
    scanf("%d", &opcaoLucro);

    float lucroTipo = 0;
    const char *tipoProduto;

    switch (opcaoLucro) {
        case 1:
            tipoProduto = "Camisa";
            break;
        case 2:
            tipoProduto = "Caneca";
            break;
        case 3:
            tipoProduto = "Almofada";
            break;
        case 4:
            tipoProduto = "Chaveiro";
            break;
        default:
            printf("Opção inválida.\n");
            return;
    }

    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].tipo, tipoProduto) == 0) {
            lucroTipo += (produtos[i].preco * produtos[i].quantidade);
        }
    }

    printf("Lucro com %s: %.2f\n", tipoProduto, lucroTipo);
}


int main() {
    int opcao;

    do {
        printf("\n=== LOJA GEEK ===\n");
        printf("1. Inserir produtos\n");
        printf("2. Mostrar produtos cadastrados\n");
        printf("3. Pesquisa por palavra-chave\n");
        printf("4. Atualizar quantidade de um produto\n");
        printf("5. Mostrar quantidade de produtos cadastrados\n");
        printf("6. Mostrar relatorio de lucros por produto\n");
        printf("7. Finalizar aplicação\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirProduto();
                break;
            case 2:
                mostrarProdutos();
                break;
            case 3:
                gerarRelatorioPorPalavraChave();
                break;
            case 4:
                atualizarQuantidadeProduto();
                break;
            case 5:
                mostrarQuantidadeProdutos();
                break;
            case 6:
                lucrosporproduto();
                break;
            case 7:
                printf("Aplicação finalizada.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
}
