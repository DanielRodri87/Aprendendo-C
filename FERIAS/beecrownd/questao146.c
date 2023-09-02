#include <stdio.h>

int main()
{
    int cartas[3], i, repete = 0, n1;
    scanf("%d %d", &cartas[0], &cartas[1]);
    if (cartas[0] == cartas[1])
    {
        printf("%d\n", cartas[0]);
    } else if (cartas[0] > cartas[1])
    {
        printf("%d\n", cartas[0]);
    } else if (cartas[1] > cartas[0])
    {
        printf("%d\n", cartas[1]);
    }
}