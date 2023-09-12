#include <stdio.h>
// Questão 1 - LISTA UFU
int main(void)
{
    int num1 = 2;
    float num2 = 2.00;
    char letra = 'a';

    printf("%d %f %c\n", num1, num2, letra);

    int *pi = &num1;
    float *pf = &num2;
    char *pc = &letra;

    *pi = 4;
    *pf = 5.00;
    *pc = 'b';

    printf("%d %f %c\n", *pi, *pf, *pc);


    getchar();
    return 0;
}