// 1066 
#include <stdio.h>
int main(){
    int cont = 0, x, par = 0, impar = 0, positivo = 0, negativo = 0;
    while (cont < 5) {
        scanf("%d", &x);
        if (x % 2 == 0){
            par = par + 1;
        }
        if (x % 2 != 0){
            impar = impar + 1;
        }
        if (x > 0){
            positivo = positivo + 1;
        }
        if (x < 0){
            negativo = negativo + 1;
        }
        cont = cont + 1;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
    return 0;
}