#include <stdio.h>

int main(){

    float valor;

    printf("Informe o valor do serviço: ");
    scanf("%f", &valor);

    float valor_final = valor*1.1;
    float taxa = valor * 0.1;

    printf("O valor inicial é: %.2f\n, Taxa: %.2f\n, valor final %.2f\n", valor, taxa, valor_final);
    

    return 0;
}