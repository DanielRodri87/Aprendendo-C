#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    long double somatorio = 1, inicio = 1;

    for(i = 2; i <= 64; i++){
        inicio = inicio * 2;
        somatorio += inicio;
        printf("%d Valor: %Lf\n", i, inicio);
        __mingw_printf("%d Valor: %Lf\n", i, inicio);
    }
    printf("->Valor: %Lf\n", somatorio);
    __mingw_printf("->Valor: %Lf\n", somatorio);
    return 0;
}