#include <stdio.h>

int main() {
    float valortotal = 0, valoravista = 0, valoraprazo = 0, n;
    int ntransacoes, cont = 0;
    char codigo;

    printf("Escreva a quantidade de transacoes que deseja efetuar: ");
    scanf("%d", &ntransacoes);

    while (cont < ntransacoes) {
        printf("\n\nValor da %d transacao: \n\n", cont+1);
        printf("Escolha o codigo referente ao pagamento da compra:\nV - a vista, P - a prazo\n");
        scanf(" %c", &codigo);

        switch (codigo) {
            // Valor das compras a vista
            case 'V':
                printf("\nDigite o valor da compra: ");
                scanf("%f", &n);
                valortotal = valortotal + n;
                valoravista = valoravista + n;

                break;

            // Valor das compras a prazo
            case 'P':
                printf("Digite o valor da compra: ");
                scanf("%f", &n);
                valortotal = valortotal + n;
                valoraprazo = valoraprazo + n;
                break;

            default:
                printf("Codigo invalido\n");
                break;
        }

        cont = cont + 1;
        printf("O valor total das compras a vista: %.2f\n", valoravista);
        printf("\nO valor total das compras a prazo: %.2f\n", valoraprazo);
        printf("O valor total das compras: %.2f\n", valortotal);
    }

    return 0;
}