#include <stdio.h>

int main ()
{
	char caractere;
    int mensagemTam; 
	scanf("%d", &mensagemTam);
	do
	{
		// Lê a entrada comom hexadecimal;
		scanf("%s", &caractere);
		if (caractere != ' ')
		{
			printf("%c", caractere);
			mensagemTam--;
		}
	} while (mensagemTam);
	printf("\n");
    return 0;
}