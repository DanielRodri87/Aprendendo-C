#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x+y > z && x+z > y && y+z > y)
    {
        if (x == y && x == z && y == z)
        {
            printf("Equilatero");
        } else if (x == y || x == z || y == z)
        {
            printf("Isosceles");
        } else{
            printf("escaleno");
        }
    } else
    {
        printf("Não eh um triangulo");
    }
    return 0;
}