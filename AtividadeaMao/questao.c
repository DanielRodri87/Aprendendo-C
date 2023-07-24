// Possui vetor String que armazena o nome do produto;
// Matriz Inteira que armazena o código e a quantidade
// matriz float que armazena o preço de compra e preço de venda (que é o preço de compra + 30%);

// Cadastro do produto: Deve informar o código, na sequencia: Nome, quantidade, preço de compra e preço de venda;


//  MENU
// 1 - Cadastrar produto
// 2 - Listar o nome de todos os produtos
// 3 - Informar o nome do produto mais caro e seu valor
// 4 - Informar o nome do produto em menor quantidade no estoque;


#include <stdio.h>

int main()
{
    // Vetor String:
    char nomeProduto[50][100];
    // Matriz Inteira:
    int codigoQuantidade[100][2];
    // Matriz Float:
    float precoCompraVenda[100][2];

    int opcao, i, j, codigo, quantidade, precovenda = 0;

    do
    {
        printf("\n--------------- MENU ---------------\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar o nome de todos os produtos\n");
        printf("3 - Nome do produto mais caro\n");
        printf("4 - Nome do produto em menor quantidade no estoque\n");
        printf("0 - Sair\n");
        printf("-------------------------------------\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n--------------- CADASTRO ---------------\n");
            printf("Digite o codigo do produto: ");
            scanf("%d", &codigo);
            print("Digite o nome do produto: ");
            scanf("%s", &nomeProduto[codigo]);
            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade);
            printf("Digite o preco de compra do produto: ");
            scanf("%f", &precoCompraVenda[codigo][0]);

            precovenda = precoCompraVenda[codigo][0] + (precoCompraVenda[codigo][0] * 0.3);
            precoCompraVenda[codigo][1] = precovenda;
            break;
        
        case 2:
            printf("\n--------------- LISTA DE PRODUTOS ---------------\n");
            for (i = 0; i < 100; i++)
            {
                if (nomeProduto[i] != NULL)
                {
                    printf("\n-------------------------------------\n");
                    printf("Codigo: %d\n", i);
                    printf("Nome: %s\n", nomeProduto[i]);
                    printf("Preco de compra: %.2f\n", precoCompraVenda[i][0]);
                    printf("Preco de venda: %.2f\n", precoCompraVenda[i][1]);
                    printf("\n-------------------------------------\n");
                }
            }
            break;
        }
    } while (opcao != 0);

    return 0;
}
