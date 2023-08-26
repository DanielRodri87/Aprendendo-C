// No tabuleiro de xadrez, a casa na linha 1, coluna 1 (canto superior esquerdo) é sempre branca e as cores das casas se alternam entre branca e preta, de acordo com o padrão conhecido como... xadrez! Dessa forma, como o tabuleiro tradicional tem oito linhas e oito colunas, a casa na linha 8, coluna 8 (canto inferior direito) será também branca. Neste problema, entretanto, queremos saber a cor da casa no canto inferior direito de um tabuleiro com dimensões quaisquer: L linhas e C colunas. No exemplo da figura, para L = 6 e C = 9, a casa no canto inferior direito será preta!



// Entrada
// A primeira linha da entrada contém um inteiro L (1 ≤ L ≤ 1000) indicando o número de linhas do tabuleiro. A segunda linha da entrada contém um inteiro C (1 ≤ C ≤ 1000) representando o número de colunas.

// Saída
// Imprima uma linha na saída. A linha deve conter um inteiro, representando a cor da casa no canto inferior direito do tabuleiro: 1, se for branca; e 0, se for preta.

#include <stdio.h>

int main()
{
    int l, c;
    scanf("%d %d", &l, &c);
    if (l % 2 == 0)
    {
        if (c % 2 == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
        if (c % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}