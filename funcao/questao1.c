#include <stdio.h>
#include <stdlib.h>

int soma (int x, int y) {
    return x + y;
}
void saudacao()
{
    printf("Bem-vindo ao codigo! \n");
}

void despedida()
{
    printf("\nFim da aplicacao!! \n");
    system("pause");
}

int main()
{
    saudacao();
    int n1, n2, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    resultado = soma(n1, n2);
    printf("A soma dos numeros e: %d", resultado);
    despedida();

    return 0;
}