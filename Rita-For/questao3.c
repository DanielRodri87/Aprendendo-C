#include <stdio.h>
    int main(){
    int ntransacoes, cont=0;
    char codigo;

    printf("Escreva a quantidade de transações que deseja efetuar: ");
    scanf("%d", &ntransacoes);

    while (cont < ntransacoes )
    {
        printf("o valor da %d transação: ", cont);
        printf("\nEscolha o código referente ao pagamento da compra:\n V-a vista, P- a prazo ");
        scanf(" %c", &codigo);
        
        switch (codigo)
        { // Valor das compras à vista
        case 'V':
        printf("O valor total das compras a vista: ");
            break;
        // Valor das compras a prazo   
        case 'P':
        printf("O valor total das compras a prazo: ");
            break;
        default:
        printf("Código inválido");
            break;
        }
        cont = (cont + 1);
    }

        return 0;
    }