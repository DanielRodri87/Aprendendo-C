#include <stdio.h>
#include <string.h>


int main(){
    char s[1000];
    int i, maiusculo;

    while (scanf("%[^\n]%*c", s) != EOF){
        char r[1000], t[1000];
        strcpy(r, s);
        strcpy(t, s);

        maiusculo = 1;
        for (i = 0; i < strlen(s); i++){
            maiusculo = maiusculo != (r[i] >= 'A' && r[i] <= 'Z');
            printf("%c", maiusculo ? t[i] : r[i]);
        }
        printf("\n");
    }
    return 0;
}