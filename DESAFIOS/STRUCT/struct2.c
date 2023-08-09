#include <stdio.h>

struct funcionario
{
    char nome[50];
    char cargo[50];
    float salario;
};

int main(){
    int i;
    struct funcionario func[5];
    for (i = 0; i<5; i++)
    {
        printf("Digite o nome do funcionario: ");
        gets(func[i].nome);
        printf("Digite o cargo do funcionario: ");
        gets(func[i].cargo);
        printf("Digite o salario do funcionario: ");
        scanf("%f", &func[i].salario);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Nome: %s\n", func[i].nome);
        printf("Cargo: %s\n", func[i].cargo);
        printf("Salario: %.2f\n", func[i].salario);
    }

    return 0;
}
