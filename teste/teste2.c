// faça um algoritmo que retorne:


#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho = 5, i, j;
    
    for(i = 0; i < tamanho; i++){ 
        for (j = 0; j < tamanho; j++){ 
            if (j <= i){ 
                printf("1 "); 
            } else {
                printf("0 ");
            }
        }
        printf("\n");
        printf("depurar I: %d", i);
        printf("\ndepurar J: %d\n", j);
    }
    return 0;
}