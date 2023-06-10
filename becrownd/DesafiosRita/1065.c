#include <stdio.h>

int main(){

    int cont = 0, x, par = 0;

    while (cont < 5) {
        scanf("%d", &x);
        if (x % 2 == 0){
            par = par + 1;
        }
        cont = cont + 1;
    }
    printf("%d valores pares", par);

    return 0;
}