#include <stdio.h>
    int main(){
    float valortotal = 0, valoravista = 0, valoraprazo = 0, valortransacao = 0;
    int ntransacoes, cont = 0;
    char codigo;

    printf("Escreva a quantidade de transações que deseja efetuar: ");
    scanf("%d", &ntransacoes);

    while (cont < ntransacoes )
    { 
        do
        {
            printf("o valor da %d transação:\n ", cont + 1);
            scanf("%f", &valortransacao);
            cont = (cont + 1);
            valortotal = (valortotal + valortransacao);
        } while (cont < ntransacoes);
        
        printf("Escolha o código referente ao pagamento da compra: V-a vista, P- a prazo ");
        scanf("%s", &codigo);
        
        switch (codigo)
        { // Valor das compras à vista
             case 'V': valoravista = valortotal;
                  printf("O valor da compra efetuada eh: ", valoravista);
                  printf("O valor total das compras a vista eh: %.2f\n", valoravista);
                  break;
            // Valor das compras a prazo
              case 'P': valoraprazo = valortotal;
                  printf("O valor da compra efetuada eh: ", valoraprazo);
                  printf("O valor total das compras a prazo eh: %.2f\n", valoraprazo);
                  break;

               default:
                printf("Saindo da aplicação\n");
                break;
        }
           
    }

        return 0;
    }