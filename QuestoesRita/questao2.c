#include <stdio.h>

int main(){

    int n1, n2, soma;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    printf("A soma de %d + %d = %d\n", n1, n2, soma);

    return 0;
}