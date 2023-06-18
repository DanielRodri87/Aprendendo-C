#include <stdio.h>

int main() {
    int linhas = 8;
    int colunas = 8;
    int quadros = linhas * colunas;
    long long int graos = 1;  // Utilizamos um tipo long long int para lidar com números grandes
    long long int total_graos = 0;
    
    for (int i = 1; i <= quadros; i++) {
        total_graos += graos;
        graos *= 2;
    }
    
    printf("O monge esperava receber um total de %lld grãos.\n", total_graos);
    
    return 0;
}