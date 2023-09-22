#include <stdio.h>

int main()
{
    int qtd;
    float valor;
    scanf("%f %d", &valor, &qtd);
    printf("%.2f\n", valor/qtd);

    return 0;
}