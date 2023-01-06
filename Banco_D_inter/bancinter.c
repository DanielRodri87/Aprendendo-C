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

            printf("Digite seu nome: ");
            printf("Digite seu número de conta: ");
            printf("Digite sua agência: ");
            printf("Digite seu saldo: ");
            printf("Digite sua senha: ");
            scanf("%s", &nome);
            scanf("%d", &num);
            scanf("%d", &agencia);
            scanf("%d", &saldo);
            scanf("%d", &senha);
            printf("==========================================================");

            break;
        }
        else if (opcao == 2){
            printf("==========================================================\n");
            printf("=================== LOGIN DE CLIENTE =====================\n");
            printf("==========================================================\n");

            printf("Digite seu número de conta: ");
            scanf("%d", &num);
            printf("Digite sua agência: ");
            scanf("%d", &agencia);
            printf("Digite sua senha: ");
            scanf("%d", &senha);
            printf("==========================================================");

            break;
        }
        else{
            printf("Opção inválida, tente novamente.\n");
        }
    }

}