#include <stdio.h>

int main(){

    float km_inicial, km_final, combustivel_gasto, consumo_medio;

    printf("Quantos quilometros seu carro tinha: ");
    scanf("%f", &km_inicial);
    printf("Quantos quilometros rodados seu carro tem: ");
    scanf("%f", &km_final);
    printf("Quantos litros de combustivel seu carro gastou: ");
    scanf("%f", &combustivel_gasto);

    consumo_medio = (km_final - km_inicial) / combustivel_gasto;

    printf("Seu carro faz %.2f km/l\n", consumo_medio);

    return 0;
}