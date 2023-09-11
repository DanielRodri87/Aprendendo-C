#include <stdio.h>

int main(void)
{
    int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y = 20;
    *ponteiro = y;
    

    printf("%d %d\n", x, y);

    getchar();
    return 0;
}