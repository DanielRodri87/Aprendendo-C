#include <stdio.h>

int main()
{
    int c, comprimento, treino;
    scanf("%d %d", &comprimento, treino);
    c = treino-comprimento;
    if (c <=0){
        printf("0\n");
    } else{
        printf("%d\n", &c);
    }

    return 0;
}