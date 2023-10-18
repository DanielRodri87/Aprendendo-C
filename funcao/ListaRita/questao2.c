#include <stdio.h>

struct Pessoa
{
    char nome[50];
    int idade;
    char endereco[50];
} p1;


int main()
{
    printf("Informe seu nome: ");
    scanf("%s", p1.nome);
    printf("Informe sua idade: ");
    scanf("%d", &p1.idade);
    printf("Informe seu endereco: ");
    scanf("%s", p1.endereco);    


    printf("%s %d %s", p1.nome, p1.idade, p1.endereco);
    return 0;
}
