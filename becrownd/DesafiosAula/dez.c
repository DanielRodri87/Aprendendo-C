#include <stdio.h>

int main(){
    int n, i = 1, soma = 0; // Soma = 0 Aqui será armazenado a soma dos divisores de n, a partir dele saberei se é perfeito ou não
    printf("Digite o número que você quer saber se é perfeito ou não: ");
    scanf("%d", &n);

    while (i < n){ // enquanto o contador for menor que o número, ele vai testar se é divisível
        if (n % i == 0){ // Se o resto da divisão for 0, então o número é divisível pelo contador i
            soma = soma + i; // soma recebe o valor deele mesmo mais o valor de i
        }
        i = i + 1; // Incrementando o contador
    }

    if (soma == n){ // Se a soma dos divisores for igual ao número, então ele é perfeito
        printf("O número %d é perfeito\n", n);
    } else {
        printf("O número %d não é perfeito\n", n);
    }

    return 0;
}