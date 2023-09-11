#include <stdio.h>

int main()
{
    int nota, media, nota2;

    scanf("%d", &nota);
    scanf("%d", &media);

    nota2 = (media * 2) - nota;
    printf("%d\n", nota2);
    return 0;
}