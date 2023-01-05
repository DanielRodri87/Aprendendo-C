#include <stdio.h>

int main()
{


    char nome[50];
    printf("Digite seu nome completo: ");
    scanf("%s", nome);


    printf("1 - Nome como está digitado\n2 - Nome em maiúsculo\n3 - Nome em minúsculo\n");

    int opcao;
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("Nome: %s", nome);
            break;
        case 2:
            printf("Nome: %s", strupr(nome));
            break;
        case 3:
            printf("Nome: %s", strlwr(nome));
            break;
        default:
            printf("Opção inválida");
    }


    return 0;

}
