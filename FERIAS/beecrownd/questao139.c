#include <stdio.h>

int main()
{
    int qtd, i;
    float kgcomidaBlobs, dias;

    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++)
    {
        scanf("%f", &kgcomidaBlobs);
        dias = 0;
        while (kgcomidaBlobs > 1)
        {
            kgcomidaBlobs /= 2;
            dias++;
        }
        printf("%.0f dias\n", dias);
    }
    return 0;
}