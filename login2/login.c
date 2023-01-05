#include <stdlib.h>


    int main(void){
    int repeat;
    for (repeat = 0; repeat == 0;){

        char user[20], senha[20];
        char newuser[20], newsenha[20];

        printf("\nLOGIN\n ");
        printf("\nDigite o usuário: ");
        scanf("%s", &newuser);
        printf("\nDigite a senha: ");
        scanf("%s", &newsenha);

        if (strcmp(newuser, user) == 0 && strcmp(newsenha, senha) == 0) {
            printf("\nLogin efetuado com sucesso!");
            repeat = 1;
        } else {
            printf("\nUsuário ou senha incorretos!");
            printf("\n========================================\n");
            printf("\nPrimeira vez aqui?\n 1- Sim\n 2- Não\n");

            int op;
            scanf("%d", &op);

            if (op == 1) {
                printf("\nCrie um usuário e senha!\n");
                printf("\nDigite o usuário: ");
                scanf("%s", &user);
                printf("\nDigite a senha: ");
                scanf("%s", &senha);
            } else {
                int saida;
                printf("\n1 - Tentar novamente - 2 - Sair\n");
                scanf("%d", &saida);
                if (saida == 2) {
                    repeat = 1;
                }

            }

        }
    }    

    return 0;    

}