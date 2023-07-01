#include <stdio.h>
#define MAX 5

int main(){
    int n, lista[MAX], i;

    printf("Soma de todos os valores\n");
    for (i=1;i<=5;i++)
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        lista[i] = n;

    }

    printf(lista);


    return 0;
}