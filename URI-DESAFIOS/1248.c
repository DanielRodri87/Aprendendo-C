#include <stdio.h>

int main(){

    int n, i, j, k, l, m, o, p, q, r, s, t, u, v, w, x, y, z;
    char str[100], str2[100], str3[100];

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++){
        gets(str);
        gets(str2);
        gets(str3);

        for (j = 0; str[j] != '\0'; j++){
            for (k = 0; str2[k] != '\0'; k++){
                if (str[j] == str2[k]){
                    str[j] = '0';
                    str2[k] = '0';
                }
            }
        }

        for (l = 0; str[l] != '\0'; l++){
            for (m = l + 1; str[m] != '\0'; m++){
                if (str[l] > str[m]){
                    char temp = str[l];
                    str[l] = str[m];
                    str[m] = temp;
                }
            }
        }

        for (o = 0; str2[o] != '\0'; o++){
            for (p = o + 1; str2[p] != '\0'; p++){
                if (str2[o] > str2[p]){
                    char temp = str2[o];
                    str2[o] = str2[p];
                    str2[p] = temp;
                }
            }
        }

        for (q = 0; str3[q] != '\0'; q++){
            for (r = q + 1; str3[r] != '\0'; r++){
                if (str3[q] > str3[r]){
                    char temp = str3[q];
                    str3[q] = str3[r];
                    str3[r] = temp;
                }
            }
        }

        for (s = 0; str[s] != '\0'; s++){
            for (t = 0; str2[t] != '\0'; t++){
                if (str[s] == str2[t]){
                    str[s] = '0';
                    str2[t] = '0';
                }
            }
        }

        for (u = 0; str[s] != '\0'; u++){
            for (v = 0; str3[v] != '\0'; v++){
                if (str[s] == str3[v]){
                    str[s] = '0';
                    str3[v] = '0';
                }
            }
        }

        for (w = 0; str2[w] != '\0'; w++){
            for (x = 0; str3[x] != '\0'; x++){
                if (str2[w] == str3[x]){
                    str2[w] = '0';
                    str3[x] = '0';
                }
            }
        }
    return 0;
}