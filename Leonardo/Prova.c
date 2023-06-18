#include <stdio.h>

int main(){
    int cont = 0, num = 0, somap = 0, somai, mediai = 0, p = 0, i = 0;

    while (cont < 10)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            somap = somap + num;
            p = p + 1;

        }else{
            somai = somai + num;
            i = i + 1;
        }
        cont = cont + 1;
    }

    mediai = somai / i;
    printf("A media dos numeros impares é: %d\n", mediai);
    printf("A soma dos numeros pares é: %d\n", somap);
    printf("A quantidade de numeros pares é: %d\n", p);
    printf("A quantidade de numeros impares é: %d\n", i);
    

    return 0;
}