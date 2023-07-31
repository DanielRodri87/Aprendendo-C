#include <stdio.h>

int main()
{
    float matriz[3][3];
    int l, c;
    for (l=0;l<=2;l++)
    { 
        for (c = 0; c <= 2; c++)
        {

            printf("Informe o %d valor da linha %d: ", c+1, l+1);
            scanf("%f", &matriz[l][c]);
        }
        
    }
    printf("\n\n-----------------------------------------\n\n");
    for (l=0;l<=2;l++)
    {
        for (c = 0; c <= 2; c++)
        {
            printf("%.2f\t", matriz[l][c]*2);
        }
        printf("\n");
    }


    return 0;
}