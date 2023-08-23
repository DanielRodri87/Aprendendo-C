#include <stdio.h>

int main()
{
    int senha = 2002, tent;
    while (1)
    {
        scanf("%d", &tent);
        if (tent == senha)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}