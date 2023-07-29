#include <stdio.h>

int main()
{
    int i, num, op, resultado = 0;

    for (i=0; i<5; i++)
    {
        printf("\nDigite o %d numero: ", i+1);
        scanf("%d", &num);

        printf("\n1 - Par/Impar\n2 - Primo\n->");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            if (num%2==0)
            {
                printf("O numero eh par");
            } else{
                printf("O numero eh impar");
            }
            break;

        case 2:
            for (i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    resultado++;
                }
            }
            if (resultado==0)
            {
                printf("O numero eh primo\n");
            } else {
                printf("O numero nao eh primo\n");
            }
            break;
        
        default:
            break;
        }
    }

    return 0;
}