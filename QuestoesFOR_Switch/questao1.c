#include <stdio.h>
int main(){
    char nome[50];
    float nota, soma;
    int i,j;
    for (i=0;i<20;i++){
        printf("\nAluno %d: Digite o seu nome: ", i+1);
        scanf("%s", &nome);

        for (j=0;j<3;j++){
            printf("Digite a nota %d: ", j+1);
            scanf("%f", &nota);
            soma += nota;
        }

        printf("Aluno %s: media %.2f\n", nome, soma/3);
        if (soma/3 >= 7){
            printf("Aprovado\n");

        } else if (soma/3 >= 4 && soma/3 < 7){
            printf("Recuperacao\n");
        } else {
            printf("Reprovado\n");
        }
        soma = 0;
        
    }
}