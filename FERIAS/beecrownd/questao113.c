#include <stdio.h>

int main()
{
    char alfabeto[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letra;
    int i;
    scanf("%c", &letra);
    for(i = 0; i < 26; i++)
    {
        if (letra == alfabeto[i])
        {
            printf("%d\n", i+1);
        }
    }
    return 0;
}