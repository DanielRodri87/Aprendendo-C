#include <stdio.h>

int main(){

    float hora_trabalhadas, valor_hora, inss, salario_bruto, salario_liquido;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &hora_trabalhadas);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);
    printf("Digite o valor em porcentagem da taxa cobrada pelo INSS: ");
    scanf("%f", &inss);

    salario_bruto = hora_trabalhadas * valor_hora;
    salario_liquido = salario_bruto - (salario_bruto * (inss / 100));

    printf("O salário líquido é: %.2f", salario_liquido);


    return 0;
}