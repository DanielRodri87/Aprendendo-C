#include <stdio.h>

int main()
{
    float n1, n2;
    char c;
    scanf("%f %c %f", &n1, &c, &n2);
    if (c == '+'){
        printf("%.2f", n1+n2);
    } else if (c == '-'){
        printf("%.2f", n1-n2);
    } else if (c == '/'){
        printf("%.2f", n1/n2);
    } else if (c == '*'){
        printf("%.2f", n1*n2);
    } else
    {
        printf("Operacao invalida!\n");
    }
    return 0;
}