// Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.
#include <stdio.h>
#define MAX 10

int main(){
    int n[MAX], i;

    for (i=0; i<MAX; i++){
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }

    for (i=MAX-1; i>=0; i--){
        printf("%d ", n[i]);
    }

    return 0;
}