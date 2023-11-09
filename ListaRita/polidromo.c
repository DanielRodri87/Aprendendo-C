#include <stdio.h>
#include <string.h>
int main()
{
    char str1[5];
    char str2[5];
    int i, j;
    scanf("%s", str1);
    for (i = 5, j = 0; i >= 0;  j++, i--)
    {
        strcpy(str1[i], str2[j]);
    }

    printf("Antes: %s\nDepois: %s\n", str1, str2);

    return 0;
}