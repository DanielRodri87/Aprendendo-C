#include <stdio.h>

int main(){

    int base = 5, cont = 0;

    while (cont!=0)
    {
        printf("\n--------- MENU ---------\n");
        printf("1 - Triângulo\n");
        printf("2 - Quadrado\n");
        printf("3 - Retângulo\n");

        scanf("%d", &cont);
        
        switch (cont)
        {
        case 1:
            printf("Triângulo\n");
            for (int i = 0; i < base; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        
            break;
        case 2:
            printf("Quadrado\n");
            for (int i = 0; i < base; i++)
            {
                for (int j = 0; j < base; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Retângulo\n");
            for (int i = 0; i < base; i++)
            {
                for (int j = 0; j < base*2; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        
        default:
            printf("Opção inválida\n");
            break;
        }
    }

    return 0;
}