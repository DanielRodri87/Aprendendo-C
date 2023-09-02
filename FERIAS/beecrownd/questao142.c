// mplemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.

// Entrada
// A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade de casos de teste que vem a seguir. Cada caso de teste é composto por uma linha que contém duas cadeias de caracteres, cada cadeia de caracteres contém entre 1 e 50 caracteres inclusive.

// Saída
// Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia resultante.

// Exemplo de Entrada	Exemplo de Saída
// 2
// Tpo oCder
// aa bb

// TopCoder
// 

#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, k, l;
    char s1[51], s2[51], s3[101], vetorresultados[100][101];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %s", s1, s2);
        k = strlen(s1);
        l = strlen(s2);
        for (j = 0; j < k + l; j++) {
            if (j < k) {
                s3[j * 2] = s1[j];
            }
            if (j < l) {
                s3[j * 2 + 1] = s2[j];
            }
        }
        s3[j] = '\0';
        strcpy(vetorresultados[i], s3);

    }
    for (i = 0; i < n; i++) {
        printf("%s\n", vetorresultados[i]);
    }
    return 0;
}