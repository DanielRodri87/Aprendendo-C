#include <stdio.h>

int main() {
    float matriz[10][5], maior = 0.0;
    int l, c;

    for (l=0; l < 10; l++)
    {
        for (c=0; c < 5; c++)
        {
            printf("Digite as alturas da %d delegacao: ", l+1);
            scanf("%f", &matriz[l][c]);
        }
    }

    for (l=0; l < 10; l++)
    {
        for (c=0; c < 5; c++)
        {
            if (matriz[l][c] > maior)
            {
                maior = matriz[l][c];
            }
        }

    }

    printf("A maior altura é: %f", maior);

    return 0;
}