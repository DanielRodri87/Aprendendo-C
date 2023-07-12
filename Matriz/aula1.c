//=========== Matriz ===========

// É como fosse uma tabela, existe a necessidade de duas condições, 1,2, 3, 4 | a, b, c, d; 

// Só que na linguagem C, é representado apenas por números, 0, 1, 2, 3 | 0, 1, 2, 3;

//  l = linha
//  c = coluna

// O preenchimento da tabela segue o mesmo conceito de vetor e deve ter apenas um tipo de valor, sendo armazenados de sequêncial;

//  int matriz[][] --> Possui dos campos, sendo um para linhas outro para colunas;




#include <stdio.h>
// Aplicação para receber 5 notas de 4 alunos e calcular a média:
int main(){
    float notas[5][5];
    int c, l, qtdnotasap = 0, qtdnotasrp = 0, maior = 0;

    for(l = 0; l < 5; l++) //Percorrer as linhas
    { 
        for (c = 0; c < 4; c++) // Percorrer as colunas
        {
            printf("Digite a %d nota do %d aluno: ", c+1, l+1);
            scanf("%f", &notas[l][c]); // Sempre o primeiro índice é a linha e o segundo a coluna;

        }
    }
    for (l = 0; l < 5; l++) //Percorrer as linhas
    {
        for (c = 0; c < 4; c++) // Percorrer as colunas
        {
            if (notas[l][c] >= 7) // Verificar se a nota é maior ou igual a 7
            {
                qtdnotasap++; // Incrementar a quantidade de notas acima de 7
            }
            else
            {
                qtdnotasrp++; 
            }
        }
    }


    // Maior nota por aluno
    for (l = 0; l < 5; l++) //Percorrer as linhas
    {
        for (c = 0; c < 4; c++) // Percorrer as colunas
        {
            if (notas[l][c] > maior) // Verificar se a nota é maior que a variável maior
            {
                maior = notas[l][c]; // Atribuir a nota a variável maior
            }
        }
        printf("A maior nota do %d aluno foi: %d\n", l+1, maior); // Exibir a maior nota do aluno
        maior = 0; // Zerar a variável maior para o próximo aluno
    }

    for (l = 0; l < 5; l++) //Percorrer as linhas
    {
        printf("A média do %d aluno foi: %d\n", l+1, notas[l][4]); // Exibir a média do aluno
    }


    printf("Quantidade de notas acima de 7: %d\n", qtdnotasap);
    printf("Quantidade de notas abaixo de 7: %d\n", qtdnotasrp);

    return 0;
}
