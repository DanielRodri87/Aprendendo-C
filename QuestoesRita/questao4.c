#include <stdio.h>

int main(){
    int x;
    float dolar = 3.45;
    printf("Digite quanto você tem na carteira em real: ");
    scanf("%d", &x);
    
    printf("Você pode comprar %.2f dólares", x/dolar);


    return 0;
}