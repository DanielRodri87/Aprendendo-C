// 0 - E
// D - 1 a 35
// C - 36 a 60 
// B - 61 a 85
// A 86 a 100

#include <stdio.h>

int main()
{
    int nota;
    scanf("%d", &nota);
    if (nota == 0)
    {
        printf("E\n");
    } else if (nota > 0 && nota <= 35)
    {
        printf("D\n");
    } else if (nota >= 36 && nota <= 60)
    {
        printf("C\n");
    } else if (nota >= 61 && nota <= 85)
    {
        printf("B\n");
    } else if (nota >= 86 && nota <= 100)
    {
        printf("A\n");
    }
    return 0;
}
