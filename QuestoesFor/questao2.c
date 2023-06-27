#include <stdio.h>

int main()
{
    int num;

    printf("\n Os números pares entre 1 e 100 são: ");
        for(num=1;num<=100;num++)
        {
            if(num%2==0)
            {
            printf("%d ",num);
            }
        }
    return 0;
}