#include <stdio.h>

int funcao1(){

    // O comando while é um comando de repetição onde a expressao onde a expressao que representa uma dondição de controle avaliada antes do inicio.
    // 4 etapas:
    // 1. Iniciação da expressão de controle;
    // 2. Avaliação da expressão;
    // 3. Excução do bloco de comandos;
    // 4. Atualização das variáveis de controle.

    int soma = 0, a = 1;

    while (a!=0){
        printf("Digite um número inteiro ou zero para terminar: ");
        scanf("%d", &a);
        soma+=a;

    }

    printf("%d",soma);


    return 0;
}

// Do While, funciona do mesmo modo que o comando while, com a diferença de que a condição de controle é avaliada após a execução do bloco

int funcao2(){
    int i = 1;
    do
    {
        printf("Número = %d\n", i);
        i = i+1;
    } while (i<=4);

    return 0;
    
}

// EXERCICIOS:

// 1°- Mostrar todos os números ímpares de 1 até 100:
int questao1(){
    int i = 1;
    do
    {
        if (i%2==1){
            printf("Número = %d\n", i);
        }
        i = i+1;
        
    } while (i<=100);

    return 0;
    
}


// Todos os números pares de 1 até 100:


int questao2(){
    int i = 1;
    while (i<=100)
    {
        if (i % 2 == 0){
            printf("Número = %d\n", i);
        }
        i = i+1;
    }
    

    return 0;
    
}

// Escreva um programar que pergunte quantos alunos tem em uma turma, peça a nota de todos os alunos e por fim faça a média da turma
// Repetição 1 = controle dos alunos
// Repetição 2 = Controle das notas = Tem 3 avaliações
// Media
// maior media

int questao3(){

    int qa, i, nota1, nota2, nota3, media, maiormedia, menormedia, qAprovados, qReprovados;
    qa = 0;
    media = 0;
    maiormedia = 0;
    menormedia = 100;
    qAprovados = 0;
    qReprovados = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qa);

    while (qa>0)
    {
        printf("Digite a nota 1: ");
        scanf("%d", &nota1);
        printf("Digite a nota 2: ");
        scanf("%d", &nota2);
        printf("Digite a nota 3: ");
        scanf("%d", &nota3);

        media = (nota1+nota2+nota3)/3;

        if (media>maiormedia){
            maiormedia = media;
        }
        if (media<menormedia){
            menormedia = media;
        }

        if (media>=60){
            qAprovados = qAprovados+1;
        }
        else{
            qReprovados = qReprovados+1;
        }

        qa = qa-1;
    }
    

    
    


    return 0;
    
}

// Bloco de execução
int main(){
    questao3();
}