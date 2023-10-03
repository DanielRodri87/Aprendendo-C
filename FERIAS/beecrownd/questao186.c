#include <stdio.h>

int main()
{
    int alunos, i, ver = 0, maior = 0;
    scanf("%d", &alunos);
    int mat[alunos];
    float notas[alunos];
    for (i = 0; i < alunos; i++)
    {
        scanf("%d %f", &mat[i], &notas[i]);
    }
    for (i = 0; i < alunos; i++)
    {
        if (notas[i] >= 8.0)
        {
            ver++;
        }
    }
    if (ver == 0)
    {
        printf("Minimum note not reached\n");
    } else 
    {
        maior = notas[0];
        for (i = 0; i < alunos; i++)
        {
            if (maior < notas[i])
            {
                maior = mat[i];
            }
        }
        printf("%d\n", maior);
    }

    return 0;
}