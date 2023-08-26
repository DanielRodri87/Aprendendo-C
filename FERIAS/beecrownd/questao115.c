#include <stdio.h>

int main()
{
    char palavra[21];
    while (scanf("%s", palavra) != EOF)
    {
        if (strlen(palavra) >= 10)
        {
            printf("palavrao\n");
        }
        else
        {
            printf("palavrinha\n");
        }
    }
    return 0;
}