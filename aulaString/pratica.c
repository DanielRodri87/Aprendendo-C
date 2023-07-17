

int pratica()
{
    // Vetor de nomes = 5
    // Matriz de notas = 3 + 1 média
    // Quero saber o nome de quem foi aprovado e a média

    char nomes[5][100];
    float notas[5][3], media;
    int l, c, qtdaprovados = 0;

    for (l = 0; l < 5; l++)
    {
        printf("Digite o nome do %d aluno: ", l+1);
        gets(nomes[l]);
        for (c = 0; c < 3; c++)
        {
            printf("Digite a %d nota do %d aluno: ", c+1, l+1);
            scanf("%f", &notas[l][c]);
        }
        getchar();
    }

    for (l = 0; l < 5; l++)
    {
        media = 0;
        for (c = 0; c < 3; c++)
        {
            media += notas[l][c];
        }
        media /= 3;
        if (media >= 7)
        {
            printf("O aluno %s foi aprovado com media %.2f\n", nomes[l], media);
            qtdaprovados++;
        }
    }
    printf("A quantidade de aprovados foi: %d", qtdaprovados);


    return 0;
}