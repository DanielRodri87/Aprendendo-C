#include <stdio.h>


void maiormenor(int *a, int *b)
{
    if (*b > *a)
    {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main(void)
{
    int valor1, valor2;
    scanf("%d %d", &valor1, &valor2);

    int *pont1 = &valor1, *pont2 = &valor2;
    
    printf("\n\nAntes da troca:\n");
    printf("Valor de A: %d\n", *pont1);
    printf("Valor de B: %d\n", *pont2);

    maiormenor(pont1, pont2);

    printf("\n\nDepois da troca:\n");
    printf("Valor de A: %d\n", *pont1);
    printf("Valor de B: %d\n", *pont2);

    getchar();
    return 0;
}