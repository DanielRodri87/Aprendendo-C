#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, i, x, certo = 0;
    scanf("%d", &x);
    for (i=0;i<5;i++)
    {
        scanf("%d", &num);
        if (x==num)
        {
            certo++;
        }
    
    }
    printf("%d\n", certo);

    return 0;
}