// Seu irmão mais novo aprendeu a escrever apenas um, dois e três, em Inglês. Ele escreveu muitas dessas palavras em um papel e a sua tarefa é reconhecê-las. Nota-se que o seu irmão mais novo é apenas uma criança, então ele pode fazer pequenos erros: para cada palavra, pode haver, no máximo, uma letra errada. O comprimento de palavra é sempre correto. É garantido que cada palavra que ele escreveu é em letras minúsculas, e cada palavra que ele escreveu tem uma interpretação única.

// Entrada
// A primeira linha contém o número de palavras que o seu irmão mais novo escreveu. Cada uma das linhas seguintes contém uma única palavra com todas as letras em minúsculo. As palavras satisfazem as restrições acima: no máximo uma letra poderia estar errada, mas o comprimento da palavra está sempre correto. Haverá, no máximo, 1000 palavras de entrada.

// Saída
// Para cada caso de teste, imprima o valor numérico da palavra.

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k, l, m, cont;
    char palavra[1000][1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", palavra[i]);
    for (i = 0; i < n; i++)
    {
        cont = 0;
        for (j = 0; j < strlen(palavra[i]); j++)
        {
            if (palavra[i][j] == 'o')
                cont++;
            if (palavra[i][j] == 'n')
                cont++;
            if (palavra[i][j] == 'e')
                cont++;
        }
        if (cont >= 2)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}