#include <stdio.h>

int main()
{
    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%c", frase[i]);
    }
    return 0;
}