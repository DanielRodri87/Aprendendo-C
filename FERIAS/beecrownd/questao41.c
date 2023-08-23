
#include <stdio.h>

int main()
{
    int n, f1, f2, i, j, k, l, m, aux, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &f1, &f2);
        if (f1>f2)
        {
            aux = f1;
            f1 = f2;
            f2 = aux;
        }
        if (f1%2==0)
        {
            aux2 = f1/2;
            if (f2%2==0)
            {
                aux3 = f2/2;
                if (aux2>aux3)
                {
                    printf("%d\n", aux3);
                } else
                {
                    printf("%d\n", aux2);
                }
            } else
            {
                aux4 = f2/3;
                if (aux2>aux4)
                {
                    printf("%d\n", aux4);
                } else
                {
                    printf("%d\n", aux2);
                }
            }
        } else
        {
            aux5 = f1/3;
            if (f2%2==0)
            {
                aux6 = f2/2;
                if (aux5>aux6)
                {
                    printf("%d\n", aux6);
                } else
                {
                    printf("%d\n", aux5);
                }
            } else
            {
                aux7 = f2/3;
                if (aux5>aux7)
                {
                    printf("%d\n", aux7);
                } else
                {
                    printf("%d\n", aux5);
                }
            }
        }
    }
    return 0;
}