#include <stdio.h>
 
int main() {

    int num1;
    int num2;
    printf("digite o 1 numero ");
    scanf("%d", &num1);
    printf("digite o 2 numero ");
    scanf("%d", &num2);

    int s = num1+num2;

    printf("X = %d", s);

    return 0;
}