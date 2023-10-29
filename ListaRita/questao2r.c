#include <stdio.h>

int main(){
    int n1, n2, n3;
    float media, f1, f2, f3;

    scanf("%d %d %d", &n1, &n2, &n3);

    f1 = (float)n1;
    f2 = (float)n2;
    f3 = (float)n3;

    media = (f1+f2+f3) / 3;
    printf("A média do aluno é: %.2f", media);
    return 0;
}