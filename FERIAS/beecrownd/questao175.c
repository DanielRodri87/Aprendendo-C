#include <stdio.h>

int main()
{
    int q, i, v, s=0, n=0;
    scanf("%d", &q);
    for (i=0; i<q; i++){
        scanf("%d", &v);
        if (v==0){
            s++;
        } else {
            n++;
        }
    }
    if (s>n){
        printf("Y\n");
    } else {
        printf("N\n");
    }
    return 0;
}