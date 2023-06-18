//  faça um programa que leia um número inteiro e exiba se o número é primo ou não

#include <stdio.h>

int main (){
    int n, i = 1, divisores = 0; // Divisores = 0 porque todo número é divisível por 1 e por ele mesmo, a partir dele saberei se ultrapassa a quantidade de divisores

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    while (i <= n){
        if (n % i == 0){ // Se o resto da divisão for 0, então o número é divisível por i
            divisores = divisores + 1;
        }
        i = i + 1;
    }

    if (divisores == 2){
        printf("O número %d é primo\n", n);
    } else {
        printf("O número %d não é primo\n", n);
    }

    return 0;
}