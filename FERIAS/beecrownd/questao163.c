#include <stdio.h>

int main()
{
    int h1, m1, h2, m2, difh, difm;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    while ((h1 != 0) && (m1 != 0) && (h2 != 0) && (m2 != 0))
    {
        difh = h2 - h1;
        difm = m2 - m1;

        if (difh < 0)
        {
            difh = 24 + (h2 - h1);
            break;
        }

        if (difm < 0)
        {
            difm = 60 + (m2 - m1);
            difh--;
            break;
        }
    }
    
    printf("%d\n", (difh * 60) + difm);


    return 0;
}