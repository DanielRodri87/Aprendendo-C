#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    // Filmes:
        // - Código
        // - Nome
        // - Categoria [Vetores]
        //  Quantidade

        char vfilmes[100][40], vcategoria[5][40];
        int l, opcategoria, leiturafor, cfilmes[100][3]; // 100 linhas, 3 colunas: Código, Quantidade, Categoria;

        for (l=0; l<5;l++)
        {
            printf("Informe o nome da %d categoria: ", l+1);
            gets(vcategoria[l]);
        }

        for (l=0;l<100;l++)
        {
            printf("Informe o código do %d filme: ", l+1);
            scanf("%d", &cfilmes[l][0]);

            printf("Informe o nome do filme: ");
            gets(vfilmes[l]);

            printf("Informe a quantidade: ");
            scanf("%d", &cfilmes[l][1]);

            printf("Informe a categoria conforme a lista abaixo: ");

            for (leiturafor=0;leiturafor<5;leiturafor++)
            {
                printf("\n%d\t|\t%s\n", leiturafor+1, vcategoria[leiturafor]);
            }
            scanf("%d", &opcategoria);
            cfilmes[l][2] = opcategoria - 1;
        }
        // Colocar o filme por categoria
        for (l=0;l<5;l++)
        {
            printf("\nCategoria: %s\n", vcategoria[l]);
            for (leiturafor=0;leiturafor<100;leiturafor++)
            {
                if (cfilmes[leiturafor][2] == l)
                {
                    printf("\nCódigo: %d\t|\tNome: %s\t|\tQuantidade: %d\n", cfilmes[leiturafor][0], vfilmes[leiturafor], cfilmes[leiturafor][1]);
                }
            }
        }

    return 0;
}