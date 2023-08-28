#include <stdio.h>

int main ()
{
    int bolinhas, galhos;
    scanf("%d", &bolinhas);
    scanf("%d", &galhos);
    if (bolinhas < galhos/2)
        printf("Faltam %d bolinha(s)\n", galhos/2 - bolinhas);
    else
        printf("Amelia tem todas bolinhas!\n");
    return 0;
}