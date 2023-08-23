#include <stdio.h>

int main()
{
    int n, i, imp = 0;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        if (i%2!=0)
        {
            imp++;
        }
    }
    printf("%d valores impares\n", imp);
    return 0;
}