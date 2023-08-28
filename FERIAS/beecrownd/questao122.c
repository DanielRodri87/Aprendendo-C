#include <stdio.h>

int main ()
{
    float nota1, nota2, media;
    int novoCalculo = 1;
    while (novoCalculo == 1)
    {
        scanf("%f", &nota1);
        while (nota1 < 0 || nota1 > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &nota1);
        }
        scanf("%f", &nota2);
        while (nota2 < 0 || nota2 > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &nota2);
        }
        media = (nota1 + nota2)/2;
        printf("media = %.2f\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novoCalculo);
        while (novoCalculo != 1 && novoCalculo != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &novoCalculo);
        }
    }
    return 0;
}