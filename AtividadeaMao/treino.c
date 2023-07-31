// Matriz com 3 notas de 5 alunos:

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float notas[5][3], media[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite as 3 notas do aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &notas[i][j]);
            
        }
        media[i] = (notas[i][0]+notas[i][1]+notas[i][2])/3;
    }

    // exibindo as notas

    for (i = 0; i < 5; i++)
    {
        printf("Notas do aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%.2f\n", notas[i][j]);
                   
        }
        printf("Media: %.2f\n", media[i]); 
    }

    return 0;
}