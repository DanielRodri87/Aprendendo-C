
#include <stdio.h>

int main(){
    int t, n, i, j, k, l, m, aux, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10;
    scanf("%d", &t);
    for (i=0;i<t;i++){
        scanf("%d", &n);
        int v[n];
        for (j=0;j<n;j++){
            scanf("%d", &v[j]);
        }
        int cont = 0;
        for (j=0;j<n;j++){
            for (k=j+1;k<n;k++){
                if (v[j]>v[k]){
                    aux = v[j];
                    v[j] = v[k];
                    v[k] = aux;
                    cont++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cont);
    }
    return 0;
}