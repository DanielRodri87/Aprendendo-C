#include <stdio.h>
#include <string.h>

#define MAX_FILMES 100
#define MAX_CATEGORIAS 5

int codigoFilmes[MAX_FILMES];
char nomesFilmes[MAX_FILMES][50];
char categoriasFilmes[MAX_FILMES][20];
int quantidadesFilmes[MAX_FILMES];
int locacoesFilmes[MAX_FILMES];
int totalFilmes = 0;

int main() {
    char categorias[MAX_CATEGORIAS][20] = {"Ação", "Terror", "Comédia", "Documentário", "Ficção Científica"};

    while (1) {
        printf("MENU:\n");
        printf("1- Cadastrar filme\n");
        printf("2- Locação de Filmes\n");
        printf("3- Devolução de Filmes\n");
        printf("4- Filme mais locado\n");
        printf("5- Encerrar programa\n");

        int escolha;
        scanf("%d", &escolha);

        if (escolha == 1) {
            if (totalFilmes >= MAX_FILMES) {
                printf("Limite de filmes alcançado.\n");
            } else {
                int codigo;
                printf("Informe o código do filme: ");
                scanf("%d", &codigo);

                printf("Informe o nome do filme: ");
                scanf(" %[^\n]", nomesFilmes[totalFilmes]);

                printf("Informe a categoria do filme:\n");
                for (int i = 0; i < MAX_CATEGORIAS; i++) {
                    printf("%d- %s\n", i + 1, categorias[i]);
                }
                int escolhaCategoria;
                scanf("%d", &escolhaCategoria);
                if (escolhaCategoria >= 1 && escolhaCategoria <= MAX_CATEGORIAS) {
                    strcpy(categoriasFilmes[totalFilmes], categorias[escolhaCategoria - 1]);
                } else {
                    printf("Opção de categoria inválida.\n");
                    continue;
                }

                printf("Informe a quantidade de filmes adquiridos: ");
                scanf("%d", &quantidadesFilmes[totalFilmes]);
                locacoesFilmes[totalFilmes] = 0;
                codigoFilmes[totalFilmes] = codigo;

                totalFilmes++;
                printf("Filme cadastrado com sucesso!\n");
            }
        } else if (escolha == 2) {
            int codigo;
            printf("Informe o código do filme que deseja locar: ");
            scanf("%d", &codigo);

            int indice = -1;
            for (int i = 0; i < totalFilmes; i++) {
                if (codigoFilmes[i] == codigo) {
                    indice = i;
                    break;
                }
            }

            if (indice != -1 && quantidadesFilmes[indice] >= 1) {
                quantidadesFilmes[indice]--;
                locacoesFilmes[indice]++;
                printf("Filme locado com sucesso!\n");
            } else {
                printf("Filme não disponível para locação.\n");
            }
        } else if (escolha == 3) {
            int codigo;
            printf("Informe o código do filme que deseja devolver: ");
            scanf("%d", &codigo);

            int indice = -1;
            for (int i = 0; i < totalFilmes; i++) {
                if (codigoFilmes[i] == codigo) {
                    indice = i;
                    break;
                }
            }

            if (indice != -1 && locacoesFilmes[indice] >= 1) {
                quantidadesFilmes[indice]++;
                locacoesFilmes[indice]--;
                printf("Filme devolvido com sucesso!\n");
            } else {
                printf("Filme não pode ser devolvido.\n");
            }
        } else if (escolha == 4) {
            int maisLocadoIndice = 0;

            for (int i = 1; i < totalFilmes; i++) {
                if (locacoesFilmes[i] > locacoesFilmes[maisLocadoIndice]) {
                    maisLocadoIndice = i;
                }
            }

            if (totalFilmes > 0) {
                printf("Filme mais locado: %s (%d locações)\n", nomesFilmes[maisLocadoIndice], locacoesFilmes[maisLocadoIndice]);
            } else {
                printf("Nenhum filme locado ainda.\n");
            }
        } else if (escolha == 5) {
            printf("Encerrando o programa.\n");
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
