#include <stdio.h>

int main(void)
{
    float p1, p2, porcentagem;
    scanf("%f %f", &p1, &p2);
    // 50 -- 100%
    // 54 --- x
    // 50x = 54*100/50

    porcentagem = (p2*100)/p1;

    printf("%.2f%%\n", porcentagem-100);

    return 0;
}