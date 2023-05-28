// calcule o menor número de notas possíveis 
// (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir 
// mostre o valor lido e a relação de notas necessárias.

#include <stdio.h>

int main(){

    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    cem = valor / 100;
    cinquenta = (valor % 100) / 50;
    vinte = ((valor % 100) % 50) / 20;
    dez = (((valor % 100) % 50) % 20) / 10;
    cinco = ((((valor % 100) % 50) % 20) % 10) / 5;
    dois = (((((valor % 100) % 50) % 20) % 10) % 5) / 2;
    um = (((((valor % 100) % 50) % 20) % 10) % 5) % 2;

    if (cem > 0) {
        printf("Notas de 100: %d\n", cem);
    }
    if (cinquenta > 0) {
        printf("Notas de 50: %d\n", cinquenta);
    }
    if (vinte > 0) {
        printf("Notas de 20: %d\n", vinte);
    }
    if (dez > 0) {
        printf("Notas de 10: %d\n", dez);
    }
    if (cinco > 0) {
        printf("Notas de 5: %d\n", cinco);
    }
    if (dois > 0) {
        printf("Notas de 2: %d\n", dois);
    }
    if (um > 0) {
        printf("Notas de 1: %d\n", um);
    }

    return 0;
}