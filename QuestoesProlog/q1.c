#include <stdio.h>

int main()
{
    // Defina uma regra para concatenar duas listas.
    int lista1[5], lista2[5], lista3[10];
    printf("Preencha a lista1:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Valor: ");
        scanf("%d", &lista1[i]);
    }

    printf("Preencha a lista 2:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Valor: ");
        scanf("%d", &lista2[i]);
    }

    for (int conc = 0; conc < 10; conc++)
    {
        if (conc < 5)
            lista3[conc] = lista1[conc];
        else      
            lista3[conc] = lista2[conc];
    }


    printf("Exibindo a lista concatenada:\n");
    for (int conc = 0; conc < 10; conc++)
    {
        printf("%d ", lista3[conc]);   
    }
    
    return 0;
}