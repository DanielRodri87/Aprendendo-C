#include <stdio.h>

int main(){

    int total, cigarros_dia, anos, exp_vida;

    printf("Digite o total de cigarros fumados por dia: ");
    scanf("%d", &cigarros_dia);
    printf("Digite o total de anos em que você fuma: ");
    scanf("%d", &anos);

    total = ((anos * 365) * cigarros_dia) * 10;

    exp_vida = (total / 60) / 24;

    printf("Você perdeu %d dias de vida\n", exp_vida);

    return 0;
}