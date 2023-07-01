#include <stdio.h>

int main(){

    int condigo, i, pedidos = 0, qtdprodutos = 0;
    float total = 0;
    
    // Posso fazer mais de um pedido, ou seja, preciso de um for e um switch case
    printf("Digite quantos pedidos deseja fazer: ");
    scanf("%d", &pedidos);

    for (i=0; i<pedidos; i++){
        printf("Digite o codigo do produto: ");
        scanf("%d", &condigo);

        printf("Digite a quantidade: ");
        scanf("%d", &qtdprodutos);

        switch (condigo)
        {
        case 100:
            total += qtdprodutos * 1.2;
            break;
        case 101:
            total += qtdprodutos * 1.3;
            break;
        case 102:
            total += qtdprodutos * 1.5;
            break;
        case 103:
            total += qtdprodutos * 1.2;
            break;
        case 104:
            total += qtdprodutos * 1.3;
            break;
        case 105:
            total += qtdprodutos * 1.0;
            break;
        default:
            printf("Codigo invalido\n");
            break;
        }


    }

    printf("Total: %.2f\n", total);



    return 0;
}