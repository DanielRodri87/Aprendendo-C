#include <stdio.h>

int main(){
    int i, n, pares = 0, impares = 0;

    for (i=0;i<20;i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &n);
        if (n%2 == 0){
            pares++;
        } else {
            impares++;
        }
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

}