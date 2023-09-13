#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    int i = 0, j = n - 1, jogadas = j;
    int jogador1 = 1, jogador2 = 0;
    while (jogadas--) {
        if (jogador1) j--;
        if (jogador2) i++;
        jogador1 = !jogador1;
        jogador2 = !jogador2;
    }
    printf("%d\n", v[i]);

    return 0;
}
