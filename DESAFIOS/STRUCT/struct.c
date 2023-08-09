#include <stdio.h>

struct funcionario
{
    char nome[50];
    char cargo[50];
    float salario;
};

int main()
{
    int quantidade, i;
    printf("Quantos funcionarios deseja cadastrar? ");
    scanf("%d", &quantidade);
    struct funcionario f1[quantidade]; 

    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite o nome do funcionario: ");
        scanf("%s", &f1[i].nome);
        printf("Digite o cargo do funcionario: ");
        scanf("%s", &f1[i].cargo);
        printf("Digite o salario do funcionario: ");
        scanf("%f", &f1[i].salario);
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("Nome: %s\n", f1[i].nome);
        printf("Cargo: %s\n", f1[i].cargo);
        printf("Salario: %.2f\n", f1[i].salario);
    }

    return 0;
}