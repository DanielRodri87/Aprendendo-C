#include <stdio.h>

int main() {
    int c, n, i, j, total, acima;
    float media, percentual;
    scanf("%d", &c);
    for (i = 0; i < c; i++) {
        scanf("%d", &n);
        int notas[n];
        total = 0;
        for (j = 0; j < n; j++) {
            scanf("%d", &notas[j]);
            total += notas[j];
        }
        media = (float) total / n;
        acima = 0;
        for (j = 0; j < n; j++) {
            if (notas[j] > media) {
                acima++;
            }
        }
        percentual = (float) acima / n * 100;
        printf("%.3f%%\n", percentual);
    }
    return 0;
}