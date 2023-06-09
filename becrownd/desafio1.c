#include <stdio.h>

int main (){

    char sair = 'n';
    float n1, n2, op = 0;

    while (sair == 'n'){
        printf("Digite o primeiro valor: ");
        scanf("%f", &n1);
        printf("Digite o segundo valor: ");
        scanf("%f", &n2);

        printf("Digite 1 para soma\n2 para subtração\n3 - Divisão\n4 - Multiplicação\n 5 IMC\n 6 - Sair: ");
        scanf("%f", &op);

        if (op == 1){
            printf("A soma de %.2f e %.2f é %.2f\n", n1, n2, n1 + n2);
        } else if (op == 2){
            printf("A subtração de %.2f e %.2f é %.2f\n", n1, n2, n1 - n2);
        } else if (op == 3){
            printf("A divisão de %.2f e %.2f é %.2f\n", n1, n2, n1 / n2);
        } else if (op == 4){
            printf("A multiplicação de %.2f e %.2f é %.2f\n", n1, n2, n1 * n2);
        } else if (op == 5){
            float peso, altura, imc;
            printf("Digite o seu peso: ");
            scanf("%f", &peso);
            printf("Digite a sua altura: ");
            scanf("%f", &altura);
            imc = peso / (altura * altura);
            printf("Seu IMC é: %.2f\n", imc);
        } else {
            printf("Operação inválida\n");

        }
        printf("Deseja sair? (s/n): ");
        scanf(" %c", &sair);


    }

    return 0;
}