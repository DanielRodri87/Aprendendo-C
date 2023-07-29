#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[50];
    int qtd = 0, i;
    
    printf("Digite uma mensagem: ");
    gets(texto);

    for (i = 0; i < 50; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            qtd++;
        }
    }
    printf("A quantidade de vogais eh: %d", qtd);
    return 0;
}
