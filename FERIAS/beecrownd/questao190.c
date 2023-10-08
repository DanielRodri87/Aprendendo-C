#include <stdio.h>

int main()
{
    char nome[100];
    int distancia, i = 0, total = 0;

    while (scanf("%s %d", nome, &distancia) != EOF)
    {
        total += distancia;
        i++;
    }
    printf("%.1f\n",(float)total/i);
    return 0;
}