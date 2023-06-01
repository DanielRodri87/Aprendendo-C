#include <stdio.h>

// [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
// Analise seus comprimentos e diga se é possível formar um triângulo com essas
// retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento
// de cada lado deve ser menor que a soma dos outros dois


int main(){

    int reta1, reta2, reta3;

    printf("Digite o valor da primeira reta: ");
    scanf("%d", &reta1);
    printf("Digite o valor da segunda reta: ");
    scanf("%d", &reta2);
    printf("Digite o valor da terceira reta: ");
    scanf("%d", &reta3);


    if (reta1 < reta2 + reta3 && reta2 < reta1 + reta3 && reta3 < reta1 + reta2){
        printf("É possível formar um triângulo com essas retas.\n");
    } else {
        printf("Não é possível formar um triângulo com essas retas.\n");
    }

    return 0;
}