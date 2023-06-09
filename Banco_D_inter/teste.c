// criar um algoritmo que o usuário vai digitar quantos numeris vai digitar, e depois digitar numero por numero, depois disso, pegar:
// quantidade de pares e impares, maior par e maior impar, menor par e menor impar, media par, media impar, porcentagem de pares e impares

#include <stdio.h>
int main(){

    int quantidade, numero, pares = 0, impares = 0, maiorPar = 0, maiorImpar = 0, menorPar = 0, menorImpar = 0, somaPar = 0, somaImpar = 0;
    float mediaPar, mediaImpar, porcentagemPar, porcentagemImpar;

    printf("Digite a quantidade de números que você vai digitar: ");
    scanf("%d", &quantidade);

    while (quantidade > 0){
        printf("Digite um número: "); 
        scanf("%d", &numero);

        if (numero % 2 == 0){
            pares++;
            somaPar += numero;
            if (numero > maiorPar){
                maiorPar = numero;
            }
            if (numero < menorPar || menorPar == 0){
                menorPar = numero;
            }
        } else {
            impares++;
            somaImpar += numero;
            if (numero > maiorImpar){
                maiorImpar = numero;
            }
            if (numero < menorImpar || menorImpar == 0){
                menorImpar = numero;
            }
        }
        quantidade--;
    }

    if (pares > 0){
        mediaPar = somaPar / pares;
        porcentagemPar = (pares * 100) / (pares + impares);
    }
    if (impares > 0){
        mediaImpar = somaImpar / impares;
        porcentagemImpar = (impares * 100) / (pares + impares);
    }


    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de ímpares: %d\n", impares);
    printf("Maior par: %d\n", maiorPar);
    printf("Maior ímpar: %d\n", maiorImpar);
    printf("Menor par: %d\n", menorPar);
    printf("Menor ímpar: %d\n", menorImpar);
    printf("Média dos pares: %.2f\n", mediaPar);
    printf("Média dos ímpares: %.2f\n", mediaImpar);
    printf("Porcentagem de pares: %.2f%%\n", porcentagemPar);
    printf("Porcentagem de ímpares: %.2f%%\n", porcentagemImpar);
    

    

    return 0;
}