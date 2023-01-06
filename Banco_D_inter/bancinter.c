#include <stdio.h>

int main(void){
    int count;
    for (count = 0; count < 10; count++){

        int num, agencia, saldo, senha;
        char nome[20];

        printf("==========================================================\n");
        printf("======================== BEM-VINDO =======================\n");
        printf("==========================================================\n");
        printf("========================BANCO DANINTER====================\n");    
        printf("==========================================================\n");

        printf("==========================================================\n\n");
        int opcao;
        printf("=================== PRIMEIRA VEZ AQUI?===================\n 1 - Sim\n 2 - Não\n");
        scanf("%d", &opcao);
        if (opcao == 1){
            printf("==========================================================\n");
            printf("=================== CADASTRO DE CLIENTE ===================\n");
            printf("==========================================================\n");

            printf("Digite seu nome:\n");
            scanf("%s", &nome);
            printf("Digite seu número de conta:\n ");
            scanf("%d", &num);
            printf("Digite sua agência:\n ");
            scanf("%d", &agencia);
            printf("Digite seu saldo:\n ");
            scanf("%d", &saldo);
        }
        else if (opcao == 2){
            printf("==========================================================\n");
            printf("=================== LOGIN DE CLIENTE %d =====================\n", agencia);
            printf("==========================================================\n");

            int agencialogin;

            printf("Digite sua agencia:\n");
            scanf("%d", &agencialogin);
            printf("==========================================================");

            // realizar login
            if (agencialogin == agencia){
                printf("==========================================================\n");
                printf("=================== LOGIN REALIZADO COM SUCESSO =====================\n");
                printf("==========================================================\n");
            }
            else{
                printf("==========================================================\n");
                printf("=================== LOGIN NÃO REALIZADO =====================\n");
                printf("==========================================================\n");
            }

            break;
        }
        else{
            printf("Opção inválida, tente novamente.\n");
        }
    }

}