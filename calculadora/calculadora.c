#include <stdio.h>

int main(void) {

    int contador;
    for (contador = 0; contador == 0;) {

        int n1, n2, op;
        printf("\n=============================================================================\n");
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);

        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        printf("\n=============================================================================\n");

        printf("Digite a operação desejada: \n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Soma: %d", n1 + n2);
                break;
            case 2:
                printf("Subtração: %d", n1 - n2);
                break;
            case 3:
                printf("Multiplicação: %d", n1 * n2);
                break;
            case 4:
                printf("Divisão: %d", n1 / n2);
                break;
            default:
                printf("Opção inválida");
                contador = 1;
        }


        int saida;
        printf("\n=============================================================================\n");
        printf("\nDeseja realizar outra operação? \n1 - Sim\n2 - Não\n");
        scanf("%d", &saida);

        if (saida == 2) {
            contador = 1;
        }

    }

    return 0;

}


