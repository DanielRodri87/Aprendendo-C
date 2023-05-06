
#include <stdio.h>

int main(void){
    char lista[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int num = 0;
    char r[100] = {};

    while (num > 0)
    {
        r[0] = lista[num%16];
        num = num/16;

    }

    for (int i = 0; i < 100; i++)
    {
        printf("%c", r[i]);
    }
    
    


    return 0;
}