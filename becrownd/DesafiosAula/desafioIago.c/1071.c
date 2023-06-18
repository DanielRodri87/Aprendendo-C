#include <stdio.h>
int main (){
    int num1, num2, cont, soma = 0;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2){
        cont = num2;
        num2 = num1;
        num1 = cont;
    }
    cont = num1 + 1;

    while (cont < num2){
        if (cont % 2 != 0){
            soma = soma + cont;
        }
        cont = cont + 1;
    }
    printf("%d\n", soma);
}