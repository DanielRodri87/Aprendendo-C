#include <stdio.h>


int main()
{
    double M[12][12], soma=0;
    int linha, coluna, cont=0, inicio = 11, fim = 11;
    char oper;

    scanf("%c", &oper);

    for(linha = 0; linha < 12; linha++)
        for(coluna = 0; coluna < 12; coluna++) 
            scanf("%lf", &M[linha][coluna]);


    for(linha = 1; linha < 12; linha++)
    {
        for(coluna = inicio; coluna <= fim; coluna++)
        {
            soma = soma + M[linha][coluna];
            cont++;
        }
        inicio--;
    }

    if (oper == 'M')
    {
        soma = soma / cont; 
        printf("%.1lf\n", soma);
    }

    if (oper == 'S')
    {
        printf("%.1lf\n", soma);
    }

    return 0;
}