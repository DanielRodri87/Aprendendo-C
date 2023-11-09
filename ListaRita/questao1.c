#include <stdio.h>

int main(){
    float n1, n2;
    char simbolo;

    printf("Digite a equação. Ex (4 * 2): ");
    scanf("%f %c %f", &n1, &simbolo, &n2);


    if (simbolo == '+')
    {
        printf("O resultado é: %f", n1+n2);
    }else if (simbolo == '-')
    {
        printf("O resultado é: %f", n1-n2);
    } else if (simbolo == '/')
    {
        printf("O resultado é: %f", n1/n2);
    } else if (simbolo == '*')
    {
        printf("O resultado é: %f", n1*n2);
    }
    return 0;
}