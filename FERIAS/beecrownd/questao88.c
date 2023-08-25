#include <stdio.h>

int main()
{
    int i;
    float s = 0;
    for (i = 1; i <= 39; i += 2)
    {
        s += (float)i / (float)(i * 2);
    }
    printf("%.2f\n", s);
    return 0;
}