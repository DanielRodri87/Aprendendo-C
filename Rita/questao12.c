#include <stdio.h>

int main()
{
    int i, num;
    printf("Informe um valor para calcular a fatorial: ");
    scanf("%d", &num);

    printf("O fatorial é: ");
    for (i = num; i > 0; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" x ");
        }


    }
    return 0;
}