#include <stdio.h>
#include <string.h>

int main()
{
    char medico[90], cliente[90];
    int tam1, tam2;

    printf("Digite o nome do cliente: ");
    fgets(cliente, sizeof(cliente), stdin);

    printf("Digite o nome do médico: ");
    fgets(medico, sizeof(medico), stdin);

    tam1 = strlen(cliente);
    tam2 = strlen(medico);
    
    if (tam1 > tam2)
    {
        printf("go\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
