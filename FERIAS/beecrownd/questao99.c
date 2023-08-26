#include <stdio.h>

int main()
{
    int frangoe, bifee, massae, frangos, bifes, massas, total = 0;
    scanf("%d %d %d", &frangoe, &bifee, &massae);
    scanf("%d %d %d", &frangos, &bifes, &massas);   

    if (frangos > frangoe)
    {
        total = total + (frangoe - frangos);
    }
    if (bifes > bifee)
    {
        total = total + (bifee - bifes);
    }
    if (massas > massae)
    {
        total = total + (massae - massas);
    }
    printf("%d\n", total*-1);
    return 0;
}