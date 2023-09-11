#include <stdio.h>

int main(void)
{
    int x = 10; 
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;
    int *resultado;
    resultado = 6422004;


    // printf("Endereco x = %d - Valor x = %d\n", pX, *pX); // Quando coloco pX busco o endereço, quando coloco *pX busco o valor
 
    printf("Soma = %i", *resultado);



    getchar();
    return 0;
}