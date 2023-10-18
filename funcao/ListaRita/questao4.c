#include <stdio.h>

struct SI
{
    int matricula;
    char nome[50];
    float notas[3];
};


int main()
{
    struct SI a1[2];
    int op, pessoa;
    float m1nota = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("Digite o nome do %d Aluno: ", i+1);
        scanf("%s", a1[i].nome);
        printf("Digite a matricula do %d Aluno: ", i+1);
        scanf("%d", &a1[i].matricula);

        for (int j = 0; j < 3; j++)
        {
            printf("ALUNO %d: Informe sua %d nota: ", i+1, j+1);
            scanf("%f", &a1->notas[j]);
        }
    }

    printf("1 - Maior nota na primeira prova\n2 - Encontre o aluno com a maior media geral\n 3 - Encontre o aluno com a menor media: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        for (int i = 0; i < 2; i++)
        {
            if (a1[i].notas[0] > m1nota)
            {
                pessoa = i;
            }
        }
        printf("A maior nota da primeira avaliacao eh do aluno %s", a1[pessoa].notas[0], a1[pessoa].nome);

        break;
    // case 2:

    //     break;

    // case 3:

    //     break;
    
    default:
        printf("Entrada Incorreta digite um valor entre 1 e 3");
        break;
    }

    return 0;

}
