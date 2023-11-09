#include <stdio.h>

int main()
{
    float v1, v2, v3;
    printf("v1 v2 v3: ");
    scanf("%f %f %f", &v1, &v2, &v3);
    if (v1 > v2 && v3 > v2 && v1 > v3)
    {
        printf("O maior eh %.2f | meio %.2f | menor %.2f\n", v1, v2, v3);
    } else if (v1 > v2 && v2 > v3)
    {
        printf("O maior eh %.2f | meio %.2f | menor %.2f\n", v1, v3, v2);
    } else if (v2 > v1 && v3 > v1 && v2 > v3)
    {
        printf("O maior eh %.2f | meio %.2f | menor %.2f\n", v2, v1, v3);
    } else if (v2 > v1 && v1 > v3)
    {
        printf("O maior eh %.2f | meio %.2f | menor %.2f\n", v2, v3, v1);
    } else if (v3 > v1 && v2 > v1 && v3 > v2){
        printf("O maior eh %.2f | meio %.2f | menor %.2f\n", v3, v2, v1);
    } else{
        printf("O maior eh %.2f | meio %.2f | menor %.2f\n", v3, v1, v2);
    }
    return 0;
}