#include <stdio.h>
#include <string.h>

int main() {
    char nomes[100][50];
    int codigo_e_quantidade[2][50];
    float compra_e_venda[2][50];

    int l, q = 0, opcao;

    do {
        printf("------- MENU -------\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar o nome dos produtos\n");
        printf("3 - Informar o nome do produto mais caro\n");
        printf("4 - Informar o nome do produto que possui menor quantidade\n");
        printf("5 - Sair\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Digite o nome do produto: ");
                fgets(nomes[q], 50, stdin);
                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo_e_quantidade[0][q]);
                printf("Digite a quantidade do produto: ");
                scanf("%d", &codigo_e_quantidade[1][q]);
                printf("Digite o valor de compra do produto: ");
                scanf("%f", &compra_e_venda[0][q]);

                compra_e_venda[1][q] = compra_e_venda[0][q] + (compra_e_venda[0][q] * 0.3);
                q++;
                break;

            case 2:
                if (q > 0) {
                    printf("Listar nome dos produtos: ");
                    for (l = 0; l < q; l++) {
                        printf("%s", nomes[l]);
                    }
                } else {
                    printf("Nenhum produto cadastrado.\n");
                }
                break;

            case 3:
                if (q > 0) {
                    printf("Listar nome do produto mais caro: ");
                    int indice_mais_caro = 0;
                    for (l = 1; l < q; l++) {
                        if (compra_e_venda[0][l] > compra_e_venda[0][indice_mais_caro]) {
                            indice_mais_caro = l;
                        }
                    }
                    printf("%s\n", nomes[indice_mais_caro]);
                    printf("Preco: %.2f\n", compra_e_venda[1][indice_mais_caro]);
                } else {
                    printf("Nenhum produto cadastrado.\n");
                }
                break;

            case 4:
                if (q > 0) {
                    printf("Listar nome do produto com menor quantidade: ");
                    int indice_menor_quantidade = 0;
                    for (l = 1; l < q; l++) {
                        if (codigo_e_quantidade[1][l] < codigo_e_quantidade[1][indice_menor_quantidade]) {
                            indice_menor_quantidade = l;
                        }
                    }
                    printf("%s\n", nomes[indice_menor_quantidade]);
                    printf("Quantidade: %d\n", codigo_e_quantidade[1][indice_menor_quantidade]);
                } else {
                    printf("Nenhum produto cadastrado.\n");
                }
                break;

            case 5:
                printf("Saindo da aplicacao...\n");
                break;

            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}