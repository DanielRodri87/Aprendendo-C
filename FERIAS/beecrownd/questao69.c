#include <stdio.h>

int main() {
    int par[5], impar[5], i, j, n, p = 0, im = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            par[p] = n;
            p++;
        } else {
            impar[im] = n;
            im++;
        }

        if (p == 5) {
            for (j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }
            p = 0;
        }

        if (im == 5) {
            for (j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            im = 0;
        }
    }

    for (i = 0; i < im; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (i = 0; i < p; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}