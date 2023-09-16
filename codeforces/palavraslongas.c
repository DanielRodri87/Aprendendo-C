#include <stdio.h>

int main()
{
    int qtd, letras, i, j;
    char text[100];
    scanf("%d", &qtd);
    for (i = 0; i < qtd; i++)
    {
        scanf("%s", text);
        for (letras = 0; text[letras] != '\0'; letras++)
        {
            printf("%c", text[letras]);
        }
        if (letras > 10)
        {
            printf("%c%d%c\n", text[0], letras - 2, text[letras - 1]);
            scanf("%s", text);
        }
        else
        {
            printf("%s\n", text);
        }
    }
    return 0;
}