// 50 alunos:

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int matricula[50];
    float notas[50][3]; 
    float media[50];
    int i;

    for (i = 0; i < 50; i++)
    {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &matricula[i]);

        printf("Digite a nota 1 do aluno %d: ", i + 1);
        scanf("%f", &notas[i][0]);

        printf("Digite a nota 2 do aluno %d: ", i + 1);
        scanf("%f", &notas[i][1]);

        printf("Digite a nota 3 do aluno %d: ", i + 1);
        scanf("%f", &notas[i][2]);

        media[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
    }

    printf("\n\n");
    printf("Matricula\tNota1\tNota2\tNota3\tMedia\n");
    for (i = 0; i < 50; i++)
    {
        printf("%d\t\t%.2f\t%.2f\t%.2f\t%.2f\n", matricula[i], notas[i][0], notas[i][1], notas[i][2], media[i]);
    }

    return 0;
}
