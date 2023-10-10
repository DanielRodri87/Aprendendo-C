#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, c = 0;

    srand(time(NULL));

    b = rand() % 101;

    printf("%d\n", b);

    while (1)
    {
        printf("Informe um Numero inteiro: ");
        scanf("%d", &a);

        if (a != b)
        {
            if (a > b)
            {
                printf("Muito Grande!\n");
            }
            else if (a < b)
            {
                printf("Muito Pequeno!\n");
            }
            c++;
        }
        else if (a == b)
        {
            printf("Correto!\nNumero de Tentativas foram: %d\n", c);
            break;
        }
    }
}