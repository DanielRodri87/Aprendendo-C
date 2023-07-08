#include <stdio.h>

int main(void){
    // combustível
    int n, alcool=0, gasolina=0, diesel=0;
    // tipo de combustível

    while (1){
        scanf("%d", &n);
        if (n==4)
            break;
        else if (n==1)
            alcool++;
        else if (n==2)
            gasolina++;
        else if (n==3)
            diesel++;
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}