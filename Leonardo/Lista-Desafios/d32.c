// < 10h = 2 pontos por hora
// 10-20h = 5 pontos por hora
// > 20h = 10 pontos por hora
// 0.05 centavos por ponto

#include <stdio.h>


int main(){

    int horas, pontos;
    float salario;

    printf("Digite quantas horas de atividade física você praticou: ");
    scanf("%d", &horas);

    if (horas < 10 && horas > 0){
        pontos = horas * 2;
    } else if (horas >= 10 && horas <= 20){
        pontos = horas * 5;
    } else {
        pontos = horas * 10;
    }

    salario = pontos * 0.05;
    
    printf("Você ganhou %d pontos\n", pontos);
    printf("Seu ganho será de R$ %.2f\n", salario);

    return 0;
}
