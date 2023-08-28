// Keanu estava testando novos modelos de tabuleiros de xadrez quanto teve a seguinte duvida:

// Quantas casas brancas e quantas casas pretas tem um tabuleiro de xadrez de tamanho nxn?


// Tabuleiro 3x3:



// 5 casas brancas e 4 casas pretas

// Tabuleiro 4x4:



// 8 casas brancas e 8 casas pretas

// Observe que a casa mais acima e mais à esquerda é sempre branca.

// Entrada
// O input consiste de uma linha com um único inteiro n.

// 2 
// ≤
//  n 
// ≤
//  100

// Saída
// Imprima "a casas brancas e b casas pretas" sem aspas, sendo a a quantidade de casas brancas e b a quantidade de casas pretas.

#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    a = (n * n) / 2;
    b = (n * n) / 2;
    if (n % 2 == 1)
    {
        a++;
    }
    printf("%d casas brancas e %d casas pretas\n", a, b);
    return 0;
}