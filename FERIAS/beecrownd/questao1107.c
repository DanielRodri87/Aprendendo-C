#include <stdio.h>

int main() {
    int altura, comp, i;

    while (1) {
        int laser = 0;

        scanf("%d %d", &altura, &comp);
        if (altura == 0 && comp == 0) {
            break;
        }

        int prevAltura = 0;
        for (i = 0; i < comp; i++) {
            int altb;
            scanf("%d", &altb);

            if (altb < prevAltura) {
                laser += prevAltura - altb;
            }

            prevAltura = altb;
        }

        printf("%d\n", laser);
    }

    return 0;
}
