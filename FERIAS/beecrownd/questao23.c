#include <stdio.h>

int main(){
    float km, litros, consumo;
    scanf("%f %f", &km, &litros);
    consumo = km / litros;
    printf("%.3f km/l\n", consumo);

    return 0;
}