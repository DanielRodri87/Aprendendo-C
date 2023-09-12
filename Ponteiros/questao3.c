#include <stdio.h>

int main(void)
{
    int valor1, valor2;
    scanf("%d %d", &valor1, &valor2);

    int *pont1 = &valor1, *pont2 = &valor2;
    if (pont1 > pont2)
    {
        printf("O ponteiro 1 é maior: %d, valor - %d", pont1, *pont1);
    } else{
        printf("O ponteiro 2 é maior: %d, valor - %d", pont2, *pont2);

    }


    getchar();
    return 0;
   
}