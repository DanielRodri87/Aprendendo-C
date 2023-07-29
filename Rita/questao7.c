#include <stdio.h>

int main()
{
    int num, i;
    printf("Digite um valor: ");
    scanf("%d", &num);

    for (i=0;i<10;i++)
    {
        printf("%dx%d = %d\n", num, i, num*i);
    }

    return 0;
}