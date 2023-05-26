#include <stdio.h>

int main(){

    int idade, anos, meses, dias;

    printf("Digite sua idade em dias: ");
    scanf("%d", &idade);

    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;

    printf("Sua idade em anos, meses e dias eh: %d anos, %d meses e %d dias\n", anos, meses, dias);

    return 0;
}