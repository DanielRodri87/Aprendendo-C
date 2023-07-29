#include <stdio.h>

int main()
{
    int cont = 0, menu, num, i;
    while (cont == 0)
    {
        printf("Escolha:\n1 - Antecessor\n2 - Sucessor: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            for (i=0;i<10;i++)
            {
                printf("\nDigite um numero inteiro: ");
                scanf("%d", &num);
                printf("O antecessor de %d eh %d: ", num, num-1);
                
            }
            break;
        case 2:
            for (i=0;i<10;i++)
            {
                printf("Digite um numero inteiro: ");
                scanf("%d", &num);
                printf("O sucessor de %d eh %d: ", num, num+1);
                
            }
            break;
        default:
            break;
        }
    }
    
    return 0;
}