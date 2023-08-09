#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Criar funções para somar, subtrair, multiplicar e dividir dois números inteiros.

int soma(int a, int b){
    return a + b;
}

int subtracao(int a, int b){
    return a - b;
}

int multiplicacao(int a, int b){
    return a * b;
}

int divisao(int a, int b){
    return a / b;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, resultado;
    char op;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite a operação desejada: ");
    scanf(" %c", &op);
    switch (op){
        case '+':
            resultado = soma(a, b);
            break;
        case '-':
            resultado = subtracao(a, b);
            break;
        case '*':
            resultado = multiplicacao(a, b);
            break;
        case '/':
            resultado = divisao(a, b);
            break;
        default:
            printf("Operação inválida!");
            break;
    }
    printf("O resultado é: %d", resultado);
    return 0;
}