// // Faça um algoritmo que transforme uma medida em milhas para
// metros. O usuário deverá digitar um valor em milhas e o
// algoritmo deverá exibir o seu valor em metros. Uma milha
// terrestre tem 1.609,3 metros.

#include <stdio.h>

int main(){

    float milhas, metros;

    printf("Digite a distância em milhas: ");
    scanf("%f", &milhas);

    metros = milhas * 1609.3;

    printf("A distância em metros é: %.2f", metros);

    

    return 0;
}