#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, positivo = 0;
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
    if (n1 > 0)
    {
        positivo++;
    }
    if (n2 > 0)
    {
        positivo++;
    }
    if (n3 > 0)
    {
        positivo++;
    }
    if (n4 > 0)
    {
        positivo++;
    }
    if (n5 > 0)
    {
        positivo++;
    }
    if (n6 > 0)
    {
        positivo++;
    }
    
    printf("%d valores positivos\n", positivo);
    return 0;
}