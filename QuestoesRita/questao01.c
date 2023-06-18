#include <stdio.h>

int main(){
    
    float salario;
    char nome[20];

    printf("\nDigite o nome do funcionario: ");
    scanf("%s", nome);
    printf("\nDigite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("O funcionario %s tem salario de R$ %.2f\n", nome, salario);

    return 0;
}