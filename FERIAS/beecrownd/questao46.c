
#include <stdio.h>

int main()
{
    int i = 1, j = 7;
    while (i <= 9)
    {
        printf("I=%d J=%d\n", i, j);
        j--;
        if (j < 5)
        {
            i += 2;
            j = 7;
        }
    }
    
    return 0;
}