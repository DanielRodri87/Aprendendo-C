// A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


// Salário	Percentual de Reajuste
// 0 - 400.00
// 400.01 - 800.00
// 800.01 - 1200.00
// 1200.01 - 2000.00
// Acima de 2000.00

// 15%
// 12%
// 10%
// 7%
// 4%

// Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

// Entrada
// A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

// Saída
// Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.


#include <stdio.h>

int main()
{
    float salario, reajuste, novoSalario;
    scanf("%f", &salario);

    if (salario >= 0 && salario <= 400.00)
    {
        reajuste = salario * 0.15;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        reajuste = salario * 0.12;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        reajuste = salario * 0.10;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        reajuste = salario * 0.07;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }
    else if (salario > 2000.00)
    {
        reajuste = salario * 0.04;
        novoSalario = salario + reajuste;
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
