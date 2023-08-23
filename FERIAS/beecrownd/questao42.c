
#include <stdio.h>

int main()
{
    int n, i, j, k, l, m, aux, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10;
    char frase[100];
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%s", frase);
        for (j=0;j<100;j++)
        {
            if (frase[j]=='\0')
            {
                break;
            }
        }
        for (k=0;k<j/2;k++)
        {
            aux = frase[k];
            frase[k] = frase[j-k-1];
            frase[j-k-1] = aux;
        }
        printf("%s\n", frase);
    }
    return 0;
}