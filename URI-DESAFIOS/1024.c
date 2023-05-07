#include <stdio.h>
 
int main() {
 
    char alfabeto[26] = "abcdefghijklmnopqrstuvwxyz";

    int n, i, j, k, l, m, o, p, q, r, s, t, u, v, w, x, y, z;
    char frase[1000];
    scanf("%d", &n);

    // Criptografia 1:
    for (i = 0; i < n; i++){
        scanf(" %[^\n]s", frase);
        for (j = 0; j < 1000; j++){
            if (frase[j] == '\0'){
                break;
            } else if (frase[j] >= 'a' && frase[j] <= 'z'){
                for (k = 0; k < 26; k++){
                    if (frase[j] == alfabeto[k]){
                        frase[j] = alfabeto[k+3];
                        break;
                    }
                }
            } else if (frase[j] >= 'A' && frase[j] <= 'Z'){
                for (l = 0; l < 26; l++){
                    if (frase[j] == alfabeto[l]){
                        frase[j] = alfabeto[l+3];
                        break;
                    }
                }
            }
        }
    }

    // Criptografia 2:

    for (m = 0; m < n; m++){
        scanf(" %[^\n]s", frase);
        for (o = 0; o < 1000; o++){
            if (frase[o] == '\0'){
                break;
            } else if (frase[o] >= 'a' && frase[o] <= 'z'){
                for (p = 0; p < 26; p++){
                    if (frase[o] == alfabeto[p]){
                        frase[o] = alfabeto[p+3];
                        break;
                    }
                }
            } else if (frase[o] >= 'A' && frase[o] <= 'Z'){
                for (q = 0; q < 26; q++){
                    if (frase[o] == alfabeto[q]){
                        frase[o] = alfabeto[q+3];
                        break;
                    }
                }
            }
        }
    }

    // Criptografia 3: Na terceira e última passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'. E mostrar o resultado final
    for (r = 0; r < n; r++){
        scanf(" %[^\n]s", frase);
        for (s = 0; s < 1000; s++){
            if (frase[s] == '\0'){
                break;
            } else if (frase[s] >= 'a' && frase[s] <= 'z'){
                for (t = 0; t < 26; t++){
                    if (frase[s] == alfabeto[t]){
                        frase[s] = alfabeto[t+3];
                        break;
                    }
                }
            } else if (frase[s] >= 'A' && frase[s] <= 'Z'){
                for (u = 0; u < 26; u++){
                    if (frase[s] == alfabeto[u]){
                        frase[s] = alfabeto[u+3];
                        break;
                    }
                }
            }
        }
    }


    return 0;
}
