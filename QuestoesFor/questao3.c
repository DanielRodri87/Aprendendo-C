#include <stdio.h>

int main(){
    int n1, res, i, sair  = 1;

    do
    {

        printf("Digite um valor entre 1 a 10: ");
        scanf("%d", &n1);
        if (n1 >= 0 && n1 <= 10){
            for (i = 0; i<=10; i++){
                res = n1+i;
                printf("%d + %d = %d\n", n1, i, res);
            }

            printf("Deseja continuar? 1 - Sim 2 - Nao: ");
            scanf("%d", sair);

        } else{
            printf("Valor não permitido! Digite um número entre 1 e 10: ");

        }

    } while (sair == 1);
        printf("\nPrograma encerrado! \n");

    return 0;
}
