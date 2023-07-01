# include <stdio.h>

int main(){

    char plano;
    float salario, novoSalario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o plano: ");
    scanf(" %c", &plano);

    switch (plano)
    {
    case 'A':
        novoSalario = salario + (salario * 0.1);
        break;
    case 'B':
        novoSalario = salario + (salario * 0.15);
        break;
    case 'C':
        novoSalario = salario + (salario * 0.2);
        break;
    
    default:
        printf("Plano invalido\n");
    }

    printf("Novo salario: %.2f\n", novoSalario);

    return 0;
}