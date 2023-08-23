// Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

// Entrada
// A entrada contém um valor inteiro N (N < 10000).

// Saída
// Imprima todos valores que quando divididos por N dão resto = 2, um por linha.

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i=1;i<=10000;i++)
    {
        if (i%n==2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}