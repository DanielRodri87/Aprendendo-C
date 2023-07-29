
#include <stdio.h>

int main()
{

    int num1, num2, i, mdc;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            mdc = i;
        }
    }

    printf("O MDC de %d e %d eh: %d", num1, num2, mdc);

    return 0;
}