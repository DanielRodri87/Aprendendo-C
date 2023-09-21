#include <stdio.h>
int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", a ^ b); // a^b = XOR = 1 se a e b forem diferentes, 0 se forem iguais
    }
    return 0;
}