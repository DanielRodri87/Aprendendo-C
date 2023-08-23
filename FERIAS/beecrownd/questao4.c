#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int moradores;
    int consumoTotal;
} Imovel;

// Função de comparação para qsort
int compare(const void *a, const void *b) {
    Imovel *imovelA = (Imovel *)a;
    Imovel *imovelB = (Imovel *)b;
    return imovelA->consumoTotal - imovelB->consumoTotal;
}

int main() {
    int cidade = 1;
    
    while (1) {
        int n;
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        Imovel imoveis[n];
        int totalMoradores = 0;
        int totalConsumo = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &imoveis[i].moradores, &imoveis[i].consumoTotal);
            totalMoradores += imoveis[i].moradores;
            totalConsumo += imoveis[i].consumoTotal;
        }
        
        // Ordena os imóveis com base no consumo total
        qsort(imoveis, n, sizeof(Imovel), compare);
        
        // Saída
        printf("Cidade# %d:\n", cidade);
        cidade++;
        
        for (int i = 0; i < n; i++) {
            printf("%d-%d ", imoveis[i].moradores, imoveis[i].consumoTotal);
        }
        
        double consumoMedio = (double)totalConsumo / totalMoradores;
        printf("\nConsumo medio: %.2lf m3.\n\n", consumoMedio);
    }
    
    return 0;
}
