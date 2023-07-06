#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int questao1()
{
    int formaPagamento, cont = 1;
    float valorCompra, valorFinal;
    
    while (cont == 1)
    {
        printf("\n--------------------\n\n");
        printf("MENU");
        printf("\n\n--------------------\n");
        printf("1 - A Vista\n");
        printf("2 - Cartão de Debito\n");  
        printf("3 - Cartao de Credito\n");
        printf("4 - Cartao de Debito\n");
        printf("5 - Finalizar\n");

        printf("\nDigite a forma de pagamento: ");
        scanf("%d", &formaPagamento);

        if (formaPagamento == 5)
        {
            printf("Finalizando...\n");
            cont = 0;
            break;
        }

        printf("Digite o valor da compra: ");
        scanf("%f", &valorCompra);

        switch (formaPagamento)
        {
        case 1:
            valorFinal = valorCompra - (valorCompra * 0.15);
            printf("O valor final eh: %.2f\n", valorFinal);
            break;
        case 2:
            valorFinal = valorCompra - (valorCompra * 0.10);
            printf("O valor final eh: %.2f\n", valorFinal);
            break;
        case 3:
            valorFinal = valorCompra;
            printf("O valor final eh: %.2f\n", valorFinal);
            break;
        case 4:
            valorFinal = valorCompra + (valorCompra * 0.10);
            printf("O valor final eh: %.2f\n", valorFinal);
            break;
        
        default:
            printf("Opcao invalida!\n");
            break;
        }

        printf("\n--------------------\n"
               "Deseja continuar?\n"
               "1 - Sim\n"
               "0 - Nao\n"
               "\n--------------------\n");
        scanf("%d", &cont);
    }
    
    
    return 0;
}


int questao2()
{
    int cont = 1;
    float num1, num2;
    char opcao;

    while (cont == 1)
    {
        printf("\n--------------------\n\n");
        printf("MENU");
        printf("\n\n--------------------\n");
        printf("A - Maior Numero\n");
        printf("B - Menor Numero\n");  
        printf("C - Media Aritmetica\n");
        printf("D - Finalizar\n");

        printf("\nDigite a opcao desejada: ");
        scanf("%s", &opcao);
        opcao = toupper(opcao);

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch (opcao)
        {
        case 'A':
            if (num1 > num2)
            {
                printf("O maior numero eh: %.2f\n", num1);
            } else {
                printf("O maior numero eh: %.2f\n", num2);
            }
            break;
        case 'B':
            if (num1 < num2)
            {
                printf("O menor numero eh: %.2f\n", num1);
            } else {
                printf("O menor numero eh: %.2f\n", num2);
            }
            break;
        case 'C':
            printf("A mehdia aritmehtica eh: %.2f\n", (num1 + num2) / 2);
            break;
        
        case 'D':
            printf("Finalizando...\n");
            cont = 0;
            break;


        
        default:
            printf("Opcao invalida!\n");
            break;
        }

        printf("\n--------------------\n"
               "Deseja continuar?\n"
               "1 - Sim\n"
               "0 - Nao\n"
               "\n--------------------\n");
        scanf("%d", &cont);
    }
    return 0;
}


int main()
{
    int opcao;
    printf(" - Qual Algoritmo você quer executar: -");
    printf("\n1 - Questao 1\n2 - Questao 2\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        questao1();
        break;
    case 2:
        questao2();
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
}