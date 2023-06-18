#include <stdio.h>

int d1(){
    int i, n, aux, cont = 0, um = 1, zero = 0;
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);
    while (cont < n){
        switch (cont){
            case 0:
                printf("%d ", zero);
                break;
            case 1:
                printf("%d ", um);
                break;
            default:
                aux = um;
                um += zero;
                zero = aux;
                printf("%d ", um);
                break;
        }
        cont++;
    }
    return 0;
}

int d2(){
    int i, n;
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("%d ", i * 2);
    }
    return 0;
}

int main(){
    int opcao;
    printf("Digite a opção desejada:\n");
    printf("1 - Sequência de Fibonacci\n");
    printf("2 - Sequência de números pares\n");
    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            d1();
            break;
        case 2:
            d2();
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}