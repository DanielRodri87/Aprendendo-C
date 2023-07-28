// Vetor
#include <stdio.h>

int questaovetor1(){
    int vetor[6], i;
    for (i=0;i<6;i++)
    {
        printf("Informe um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }
    
    for (i=0;i<6;i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}

// =========================================== Matriz ===========================================

int questao2()
{
    int matriz[4][4], c, l, maior = 0;

    for (c = 0; c < 4; c++)
    {
        for (l = 0; l < 4; l++)
        {
            printf("Informe um valor inteiro: ");
            scanf("%d", &matriz[c][l]);
        }
    }

    for (c = 0; c < 4; c++)
    {
        for (l = 0; l < 4; l++)
        {
            if (matriz[c][l] > 10)
            {
                maior++;
            }
        }
    }
    printf("A quantidade de valores maiores que DEZ: %d", maior);

    return 0;
}

int questao3()
{
    int matriz[5][5], c, l, x;
    for (c = 0; c < 5; c++)
    {
        for (l = 0; l < 5; l++)
        {
            printf("Informe um valor inteiro: ");
            scanf("%d", &matriz[c][l]);
        }
    }

    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    for (c = 0; c < 5; c++)
    {
        for (l = 0; l < 5; l++)
        {
            if (matriz[c][l] == x)
            {
                printf("O valor %d está na linha %d e coluna %d", x, c, l);
                return 0;
            }
        }
    }

    return 0;
}

