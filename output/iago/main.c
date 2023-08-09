#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define tamanho 100
#define maximo 100

typedef struct aviao{

    char nomeaviao[tamanho];
    char assentos[tamanho];
    char motores[tamanho];
    char corredor[tamanho];
    char alcance[tamanho];
    char destinos[tamanho];
    
} Aviao;

int tamanho_string(char str[]){

    int i, tamStr = 0;

    for (i = 0; str[i] != '\0'; i++){
        tamStr++;
    }

    return tamStr;
}

int qtdaviao = 0; // Variável de controle para os índices dos aviões

void menucaract(int i, Aviao lista[]) {
    int idAviao = i + 1;
    int invalido;

    printf("Aviao %d: ", idAviao);

    // Se já existirem o cadastro de aviões, o programa irá verificar quantos tem e começar o contador a partir dele
    


    printf("\nCadastrado com sucesso!\n\n");
}

int stringparaint(const char str[]) {

    int result = 0, i;

    for (i = 0; str[i] != '\0'; i++) {
        if(isdigit(str[i])){
            result = result * 10 + (str[i] - '0');
        } 
        
        else{
            return -1;
        }
    }
    return result;
}

int numero() {
    char input[100];
    int naviao;

    do{
        printf("Digite o numero de avioes: ");
        if (scanf("%s", input) == 1){

            int conversionResult = stringparaint(input);

            if (conversionResult > 0){
                naviao = conversionResult;
                return naviao;
            } 
            else{
                printf("\nDados invalidos!\n\n");
            }
        }
    }while(true);
}

void informacao(int naviao, Aviao lista[]){

    int i;
    for (i = 0; i < naviao; i++){
        menucaract(i, lista);
    }
}

void tabela(int naviao, Aviao lista[]){

    printf("\n------- TABELA DOS DADOS INFORMADOS -------\n");
    printf("AVIAO\tMODELO\t\t\tASSENTOS\tMOTORES\t\tCORREDOR\tALCANCE\t\tDESTINOS\n");
    for (int i = 0; i < naviao; i++){
        printf("%d\t%-20.20s\t%-8s\t%-15.15s\t%-15.15s\t%-8s\t%-8s\n", i + 1, lista[i].nomeaviao, lista[i].assentos, lista[i].motores, lista[i].corredor, lista[i].alcance, lista[i].destinos);
    }
    
}

void editar_aviao(int i, Aviao lista[])
{
    int opc;
    printf("\n----- ATUALIZAR DADOS -----\n");
    printf("\n1 - Modelo");
    printf("\n2 - Assentos");
    printf("\n3 - Motores");
    printf("\n4 - Corredor");
    printf("\n5 - Alcande");
    printf("\n6 - Destinos");
    printf("\n7 - Sair");
    printf("\nSelecione a coluna que deseja atualizar: ");
    fflush(stdin);
    scanf("%d",&opc);

    printf("Aviao %d: ", i + 1);

    switch (opc)
    {
    case 1:
        printf("\nDigite o modelo do aviao: ");
        fflush(stdin);
        scanf(" %[^\n]",lista[i].nomeaviao); 
        break;
        
    case 2:
        printf("\nQual o numero de assentos desse modelo?: ");
        fflush(stdin);
        scanf(" %[^\n]",lista[i].assentos); 
        break;

    case 3:
        printf("\nQual os tipos de motores?: ");
        fflush(stdin);
        scanf(" %[^\n]", lista[i].motores);
        break;
    
    case 4:
        printf("\nDigite o tipo de corredor: ");
        fflush(stdin);
        scanf(" %[^\n]", lista[i].corredor);
        break;

    case 5:
        printf("\nAlcance em km do aviao: ");
        fflush(stdin);
        scanf(" %[^\n]", lista[i].alcance);
        break;
        
    case 6:
        printf("\nNumero de destinos operados por esse modelo: ");
        fflush(stdin);
        scanf(" %[^\n]", lista[i].destinos);
        break;

    case 7:
        printf("\nSaindo da atualizacao...");
        break;
    
    default:
        printf("\nOpcao invalida!");
        break;
    }

    printf("\nAtualizado com sucesso!\n");
}

void atualizardados(int naviao, Aviao lista[])
{
    tabela(naviao, lista);
    int i;
    printf("\nQual modelo deseja atualizar?: ");
    fflush(stdin);
    scanf("%d", &i);

    if(i != 0 && i <= naviao){
        i -= 1;
        editar_aviao(i, lista);
    }
    else{
        printf("Opcao invalida!");
    }
}

void total(int naviao){
    printf("Foram inseridos %d avioes\n", naviao);
}

void menu_buscarchave(int naviao, Aviao lista[]){
    char palavraChave[tamanho];
    int opc;

    printf("\n");
    printf("Digite o modelo do aviao para busca: ");
    fflush(stdin);
    scanf(" %[^\n]", palavraChave);

    system("cls");

    int modeloEncontrado = 0;
    for (int i = 0; i < naviao; i++){
        if (strcmp(lista[i].nomeaviao, palavraChave) == 0){
            modeloEncontrado = 1;
            break;
        }
    }

    if(!modeloEncontrado){
        printf("Aviao nao encontrado: %s\n", palavraChave);
        return;
    }

    do{
        printf("Selecione a coluna para pesquisar:\n");
        printf("1 - Motores\n");
        printf("2 - Corredor\n");
        printf("3 - Assentos\n");
        printf("4 - Alcance\n");
        printf("5 - Destinos\n");
        printf("6 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opc);

        system("cls");

        switch (opc)
        {
        case 1:
            printf("\nMODELO\t\t\tMOTORES\n");
            for (int i = 0; i < naviao; i++){
                if (strcmp(lista[i].nomeaviao, palavraChave) == 0){
                    printf("%-20.20s\t%-15.15s\n", lista[i].nomeaviao, lista[i].motores);
                    break;
                }
            }
            break;

        case 2:
            printf("\nMODELO\t\t\tCORREDOR\n");
            for (int i = 0; i < naviao; i++){
                if (strcmp(lista[i].nomeaviao, palavraChave) == 0){
                    printf("%-20.20s\t%-15.15s\n", lista[i].nomeaviao, lista[i].corredor);
                    break;
                }
            }
            break;

        case 3:
            printf("\nMODELO\t\t\tASSENTOS\n");
            for (int i = 0; i < naviao; i++){
                if (strcmp(lista[i].nomeaviao, palavraChave) == 0){
                    printf("%-20.20s\t%-8s\n", lista[i].nomeaviao, lista[i].assentos);
                    break; 
                }
            }
            break;

        case 4:
            printf("\nMODELO\t\t\tALCANCE\n");
            for (int i = 0; i < naviao; i++){
                if (strcmp(lista[i].nomeaviao, palavraChave) == 0){
                    printf("%-20.20s\t%-8s\n", lista[i].nomeaviao, lista[i].alcance);
                    break;
                }
            }
            break;

        case 5:
            printf("\nMODELO\t\t\tDESTINOS\n");
            for (int i = 0; i < naviao; i++){
                if (strcmp(lista[i].nomeaviao, palavraChave) == 0){
                    printf("%-20.20s\t%-8s\n", lista[i].nomeaviao, lista[i].destinos);
                    break;
                }
            }
            break;

        case 6:
            printf("\nSaindo da aplicacao...\n");
            break;

        default:
            printf("Opcao Invalida\n");
            break;
        }
    }while(opc != 6);
}

int main(){
    int naviao;
    struct aviao lista[maximo];
    int escolha;

    do{
        printf("         -=\\`\\\n");
        printf("     |\\ _\\\\__\n");
        printf("   -=\\c`\"\"\"\"\"\"\" \"`)\n");
        printf("      `~~/ /~`\n");
        printf("        -==/ /\n");
        printf("          '-'\n");
        printf("\n");
        printf("          _  _\n");
        printf("         ( `   )_\n");
        printf("        (    )    `)\n");
        printf("      (_   (_ .  _) _)\n");
        printf("                                 _\n");
        printf("                                (  )\n");
        printf("     _ .                         ( `  ) . )\n");
        printf("   (  _ )_                      (, _(  ,)_)\n");
        printf(" (_  ( ,)\n");
        printf("\n----- SISTEMA DA EMPRESA AEREA -----\n");
        printf("1 - Cadastrar o numero de avioes\n");
        printf("2 - Inserir informacoes\n");
        printf("3 - Tabela dos dados informados\n");
        printf("4 - Gerar relatorios por palavras-chave\n");
        printf("5 - Atualizar dados\n");
        printf("6 - Mostrar a quantidade de dados\n");
        printf("7 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &escolha);
        fflush(stdin);

        switch (escolha)
        {
        case 1:
            naviao = numero();
            system("PAUSE");
            system("cls");
            break;

        case 2:
            informacao(naviao, lista);
            system("PAUSE");
            system("cls");
            break;

        case 3:
            tabela(naviao, lista);
            system("PAUSE");
            system("cls");
            break;

        case 4:
            menu_buscarchave(naviao, lista);
            break;

        case 5:
            atualizardados(naviao, lista);
            system("PAUSE");
            system("cls");
            break;

        case 6:
            total(naviao);
            break;

        case 7:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }while(escolha != 7);

    return 0;
}
