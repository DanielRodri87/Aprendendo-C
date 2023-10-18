#include <stdio.h>
#define max 1

struct Aluno
{
    char nome[50];
    int matricula;
    char curso[50];
};

int main()
{
    struct Aluno a1[max];

    for (int i = 0; i < max; i++)
    {
        printf("Digite o nome do %d Aluno: ", i+1);
        scanf("%s", a1[i].nome);
        printf("Digite a matricula do %d Aluno: ", i+1);
        scanf("%d", &a1[i].matricula);
        printf("Digite o curso do %d Aluno: ", i+1);
        scanf("%s", a1[i].curso);
    }

    for (int i = 0; i < max; i++)
    {
        printf("Nome: %s\n", a1[i].nome);
        printf("Matricula: %d\n", a1[i].matricula);
        printf("Curso: %s\n", a1[i].curso);
    }

    return 0;
}
