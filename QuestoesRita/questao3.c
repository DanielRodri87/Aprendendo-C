#include <stdio.h>

int main(){

    int n, sucessor, antecessor;

    printf("Digite um numero: ");
    scanf("%d", &n);

    sucessor = n + 1;
    antecessor = n - 1;

    printf("O sucessor de %d é %d e o antecessor é %d", n, sucessor, antecessor);

    return 0;
}