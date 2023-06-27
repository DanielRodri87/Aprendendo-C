#include <stdio.h>

int main(){
    int n = 0, pares = 0, impares = 0, i;

    for (i=1; i<=10; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n % 2 == 0){
            pares = pares+1;
        } else{
            impares = impares+1;
        }
    }
    printf("O numero de pares eh: %d\nO numero de impares eh: %d", pares, impares);

    return 0;
}