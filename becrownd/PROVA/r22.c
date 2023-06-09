 //  No dia da estreia do filme “Os Vingadores”, uma emissora de TV realizou uma
// pesquisa. Cada espectador respondeu a um questionário no qual constava sua idade e
// sua opinião em relação ao filme: excelente – 3; bom – 2; regular – 1. (1,0 ponto)
// Criar um algoritmo que receba a idade a opinião de N espectadores, calcular e exibir:
// • A quantidade de pessoas em cada opinião;
// • A média da idade das pessoas em cada opinião;
// • A porcentagem de resposta para cada opinião.

#include <stdio.h>

int main(){
    int idade, opiniao, n, i = 1, excelente = 0, bom = 0, regular = 0, nulo = 0, idadeE = 0, idadeB = 0, idadeR = 0;
    float porcentagemE, porcentagemB, porcentagemR, mediaE = 0.0, mediaB = 0.0, mediaR = 0.0;

    printf("Digite a quantidade de espectadores: ");
    scanf("%d", &n);

    while (i <= n){
        printf("Digite a idade do espectador %d: ", i );
        scanf("%d", &idade);
        printf("Digite a opinião do espectador %d: ", i);
        scanf("%d", &opiniao);

        if (opiniao == 3){
            excelente = excelente + 1;
            idadeE = idadeE + idade;

        } else if (opiniao == 2){
            bom = bom + 1;
            idadeB = idadeB + idade;

        } else if (opiniao == 1){
            regular = regular + 1;
            idadeR = idadeR + idade;

        } else {
            printf("Opinião inválida\n");
            nulo = nulo + 1;
        }
    i = i + 1;
        
        }  

    porcentagemE = (excelente * 100) / n;
    porcentagemB = (bom * 100) / n;
    porcentagemR = (regular * 100) / n;

    mediaE = (float)idadeE / excelente;
    mediaB = (float)idadeB / bom;
    mediaR = (float)idadeR / regular;

    printf("Quantidade de pessoas que acharam o filme excelente: %d\n", excelente);
    printf("Quantidade de pessoas que acharam o filme bom: %d\n", bom);
    printf("Quantidade de pessoas que acharam o filme regular: %d\n", regular);

    printf("Média de idade das pessoas que acharam o filme excelente: %.2f\n", mediaE);
    printf("Média de idade das pessoas que acharam o filme bom: %.2f\n", mediaB);
    printf("Média de idade das pessoas que acharam o filme regular: %.2f\n", mediaR);

    printf("Porcentagem de pessoas que acharam o filme excelente: %.2f\n", porcentagemE);
    printf("Porcentagem de pessoas que acharam o filme bom: %.2f\n", porcentagemB);
    printf("Porcentagem de pessoas que acharam o filme regular: %.2f\n", porcentagemR);

    return 0;

}
