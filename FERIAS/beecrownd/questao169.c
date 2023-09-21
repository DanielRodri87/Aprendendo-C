#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    int i;
    scanf("%d", &i);
    while (i--)
    {
        scanf("%s %s", a, b);
        if (strstr(a, b) != NULL)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    return 0;
}