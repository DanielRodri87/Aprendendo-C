// Machado gosta muito de escrever. Já escreveu muitos contos, resenhas, relatos de viagens que fez, além de um pequeno romance. Agora Machado quer participar de um concurso de contos, que tem regras muito rígidas sobre o formato de submissão do conto. As regras do concurso especificam o número máximo de caracteres por linha, o número máximo de linhas por página, além de limitar o número total de páginas. Adicionalmente, cada palavra deve ser escrita integralmente em uma linha (ou seja, a palavra não pode ser separada silabicamente em duas linhas). Machado quer escrever um conto com o maior número de palavras possível, dentro das regras do concurso, e precisa de sua ajuda. Dados o número máximo de caracteres por linha, o número máximo de linhas por página, e as palavras do conto que Machado está escrevendo, ele quer saber o número mínimo de páginas que seu conto utilizaria seguindo as regras do concurso.

// Entrada
// A primeira linha de um caso de teste contém três inteiros N (2 ≤ N ≤ 1000), L (1 ≤ L ≤ 30 ) e C (1 ≤ C ≤ 70) , que indicam, respectivamente, o número de palavras do conto de Machado, o número máximo de linhas por página e o número máximo de caracteres por linha. O conto de Machado é inovador e não contém nenhum caractere além de letras maiúsculas e minúsculas e espaços em branco, sem letras acentuadas e sem cedilha. A segunda linha contém o conto de Machado, composto de N palavras (1 ≤ comprimento de cada palavra ≤ C) separadas por espaços em branco; há espaço em branco somente entre duas palavras, e entre duas palavras há exatamente um espaço em branco. O final da entrada é determinado pelo final de arquivo (EOF).

// Saída
// Para cada caso de teste imprima uma única linha, contendo um único número inteiro, indicando o número mínimo de páginas que o conto de Machado ocupa, considerando as regras do concurso.

#include <stdio.h>

int main()
{
    int n, l, c, i, j, k, cont, paginas;
    char texto[1000][70];
    while (scanf("%d %d %d", &n, &l, &c) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%s", texto[i]);
        }
        cont = 0;
        paginas = 1;
        for (i = 0; i < n; i++)
        {
            if (cont + strlen(texto[i]) <= c)
            {
                cont += strlen(texto[i]) + 1;
            }
            else
            {
                paginas++;
                cont = strlen(texto[i]) + 1;
            }
        }
        printf("%d\n", paginas / l + (paginas % l != 0));
    }
    return 0;
}