#include <stdio.h>

int main(){

    int idade, i, somaidades, qtd;
    printf("Quantas idades você quer inserir? ");
    scanf("%d", i);

    qtd = i;

    for (i; i > 0; i--){
        printf("Digite a  Idade: ");
        scanf("%d", idade);

        somaidades+=idade;
    }

    printf("A média de idades é: ", somaidades/qtd);

    return 0;
}