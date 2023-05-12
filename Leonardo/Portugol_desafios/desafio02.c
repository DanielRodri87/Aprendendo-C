#include <stdio.h>

int main(){


    float distancia, tempo, velocidade_media;

    printf("Digite a distância percorrida em quilometros: ");
    scanf("%f", &distancia);
    printf("Digite o tempo gasto em horas: ");
    scanf("%f", &tempo);

    velocidade_media = distancia/tempo;

    printf("A velocidade média é: %.2f km/h", velocidade_media);

    return 0;
}