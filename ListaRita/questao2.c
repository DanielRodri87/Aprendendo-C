#include <stdio.h>

int main()
{
    int v1, v2, v3;
    float media, f1, f2, f3;
    scanf("%d %d %d", v1, v2, v3);

    f1 = (float)v1;
    f2 = (float)v2;
    f3 = (float)v3;

    media = (f1+f2+f3)/3;
    printf("A média é %.2f", media);
    return 0;
}