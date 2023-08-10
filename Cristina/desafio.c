#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100
#define MAX_CARROS 50

// Estrutura para representar um cliente
struct cliente {
    char nome[50];
    int idade;
    int cpf;
    float valor;
};

// Estrutura para representar um carro
struct carro {
    char nome[50];
    char marca[30];
    char cor[20];
    float preco;
};

struct cliente clientes[MAX_CLIENTES];
int numeroclientes = 0;

struct carro carros[MAX_CARROS] = {
    //audi
    {"A3 Sedan", "Audi", "Black", 150000.80},
    {"A3 Sportback", "Audi", "White", 160000.0},
    {"A4 Sedan", "Audi", "Red", 170000.0},
    {"A5 Sportback", "Audi", "Blue", 180000.0},
    {"RS 5 Sportback", "Audi", "Silver", 190000.0},
    //ferrari
    {"488 GTB", "Ferrari", "Red", 2500000.0},
    {"488 Spider", "Ferrari", "Yellow", 2600000.0},
    {"812 Superfast", "Ferrari", "Blue", 2700000.0},
    {"Portofino M", "Ferrari", "Black", 2800000.0},
    {"SF90 Stradale", "Ferrari", "White", 2900000.0},
    //aston martin
    {"DBX","Aston Martin","Black" ,1500000.0},
    {"Vantage","Aston Martin","Red" ,1600000.0},
    {"DBS","Aston Martin","Blue" ,1700000.0},
    {"Valkyrie","Aston Martin","White" ,1800000.0},
    {"VALHALLA","Aston Martin","Silver" ,1900000.0},
    //mclaren
    {"750S", "McLaren", "Orange", 3500000.0},
    {"750S Spider", "McLaren", "Black", 3600000.0},
    {"Artura", "McLaren", "Silver", 3700000.0},
    {"765LT Spider", "McLaren", "Blue", 3800000.0},
    {"765LT", "McLaren", "Red", 3900000.0},
    //mercedes
    {"C-Class", "Mercedes-Benz", "Black", 200000.00},
    {"CLA", "Mercedes-Benz", "White", 210000.00},
    {"GLA", "Mercedes-Benz", "Red", 220000.00},
    {"GLC", "Mercedes-Benz", "Blue", 230000.00},
    {"C-Class Cabriolet","Mercedes-Benz","Silver" ,240000.00},
};


int numCarros = 25;


// (0)função com o menu principal 
void exibirmenu() {
    printf("\n-----------LOJA DE CARROS-------------\n");
    printf(" 1- Cadastrar cliente                   \n");
    printf(" 2- Atualizar cliente                   \n");
    printf(" 3- Pesquisar carros por cor            \n");
    printf(" 4- Pesquisar carros por marca          \n");
    printf(" 5- Pesquisar carros por preço          \n");
    printf(" 6- Vender carros                       \n");
    printf(" 7- Carros comprados pelo cliente       \n");
    printf(" 0- Sair                                \n");
}

// (1)função para cadastrar cliente
void cadastrarcliente() {
    char nome[50];
    int idade=0, cpf=0;
    float valor=0;

    printf("Informe o nome do cliente: ");
    scanf(" %[^\n]", nome);
    
    printf("Informe a idade do cliente: ");
    if (scanf("%d", &idade) != 1) {
            printf("Opção inválida. \n===Digite um número válido.===\n");
            while (getchar() != '\n'); // Limpa o buffer do teclado
            idade = -1;
            return; // retorna para idade??
    } 
    printf("Informe o CPF do cliente: ");
    if (scanf("%d", &cpf) != 1) {
            printf("Opção inválida. \n===Digite um número válido.===\n");
            while (getchar() != '\n'); // Limpa o buffer do teclado
            cpf = -1;
            return; // retorna para o cpf??
    } 

   if (numeroclientes < MAX_CLIENTES) {
        strcpy(clientes[numeroclientes].nome, nome);
        clientes[numeroclientes].idade = idade;
        clientes[numeroclientes].cpf = cpf;
        numeroclientes++;
        printf("Cliente cadastrado com sucesso!\n");
    } else {
        printf("Limite de clientes atingido.\n");
    }

}

//(2)função para mostrar os dados anteriores do cliente e atualizá-los
void atualizarcliente() {
    int cpf;
    
    printf("Informe o CPF do cliente que deseja atualizar: ");
    if (scanf("%d", &cpf) != 1) {
        printf("Opção inválida. \n===Digite um número válido.===\n");
        while (getchar() != '\n'); // Limpa o buffer do teclado
        return;
    } 

    int numeroclientes = -1;
    for (int i = 0; i < numeroclientes; i++) {
        if (clientes[i].cpf == cpf) {
            numeroclientes = i;
            break;
        }
    }

    if (numeroclientes == -1) {
        printf("Cliente não encontrado.\n");
        return;
    }

    printf("Cliente encontrado:\n");
    printf("Nome: %s\n", clientes[numeroclientes].nome); 
    printf("Idade: %d\n", clientes[numeroclientes].idade);
    printf("CPF: %d\n", clientes[numeroclientes].cpf);

    
    printf("Informe o novo nome do cliente: ");
    scanf(" %[^\n]", clientes[numeroclientes].nome);
            
    printf("Informe a nova idade do cliente: ");
    scanf("%d", &clientes[numeroclientes].idade);

    printf("Dados do cliente atualizados com sucesso!\n");
}

//(3)função para pesquisar os carros pela cor
void pesquisarcordocarro() {
    char cor[20];
    
    printf("Informe a cor que deseja pesquisar: ");
    scanf("%s", cor);

    printf("Carros disponíveis na cor %s:\n", cor);
    for (int i = 0; i < numCarros; i++) {
        if (strcmp(carros[i].cor, cor) == 0) {
            printf("Nome: %s\n", carros[i].nome);
            printf("Marca: %s\n", carros[i].marca);
            printf("Cor: %s\n", carros[i].cor);
            printf("Preço: %.2f\n\n", carros[i].preco);
        }
    }
    printf("Sem mais carros disponíveis na cor %s: \n", cor);
}

//(4)função para pesquisar os carros pela marca
void pesquisarmarcadocarro() {
    char marca[20];
    
    printf("Informe a marca que deseja pesquisar: ");
    scanf("%s", marca);
    
    printf("Carros disponíveis na marca %s:\n", marca);
    for (int i = 0; i < numCarros; i++) {
        if (strcmp(carros[i].marca, marca) == 0) {
            printf("Nome: %s\n", carros[i].nome);
            printf("Marca: %s\n", carros[i].marca);
            printf("Cor: %s\n", carros[i].cor);
            printf("Preço: %.2f\n\n", carros[i].preco);
        }
    }
    printf("Sem mais carros disponíveis no marca %s: \n", marca);
}

//(5)função para pesquisar os carros pelo preço
void pesquisarprecodocarro() {
    float preco;
    
    printf("Informe o preço máximo que deseja pesquisar: ");
    scanf("%f", &preco);
    
    printf("Carros disponíveis até R$ %.2f:\n", preco);
    for (int i = 0; i < numCarros; i++) {
        if (carros[i].preco <= preco) {
            printf("Nome: %s\n", carros[i].nome);
            printf("Marca: %s\n", carros[i].marca);
            printf("Cor: %s\n", carros[i].cor);
            printf("Preço: %.2f\n\n", carros[i].preco);
        }
    }
    printf("Sem mais carros disponíveis no preco %.2f: \n", preco);
}

//(6)função para mostrar a lista de carros disponíveis para o cliente escolher quais irá comprar
void vendercarros(){

printf("\nLista de carros disponíveis:\n");

    for (int i = 0; i < numCarros; i++) {
        printf("║   Carro %d:\n", i + 1);
        printf("║   Nome: %s\n", carros[i].nome);
        printf("║   Marca: %s\n", carros[i].marca);
        printf("║   Cor: %s\n", carros[i].cor);
        printf("║   Preço: R$ %.2f\n", carros[i].preco);
    }

    // printf("Quantidade de carros escolhido pelo cliente (Máximo de 5 carros:):")
    // inicio do loop
    // printf("Digite o modelo do carro %d:");
    // fim do loop
    // printf("Digite a forma de pagamento do cliente:");
    // printf("\n1 - à vista,\n2 - cartão de crédito,\n,\n3 - boleto");


}

//(7)função para mostrar os carros comprados pelo cliente
void carroscomprados(){
    //mostrar em forma de matriz os carros escolhidos pelo cliente de acordo com a função(6)
}




int main() {
    int opcao=0;
    
    do {       
        exibirmenu(); //(1)função
        printf("Digite uma opção:");
        if (scanf("%d", &opcao) != 1) {
            printf("Opção inválida. \n===Digite um número válido.===\n");
            while (getchar() != '\n'); // Limpa o buffer do teclado
            opcao = -1;
        } 
        
        switch (opcao) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8: 
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                if (opcao != 1){
                printf("Opção inválida!\n");
                }
        }
    }while (opcao != 0);
    
    return 0;
}