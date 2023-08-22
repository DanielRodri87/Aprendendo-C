#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], i;
    char matriz[100][3], cidade; 

    for (i = 0; i < 100; i++)
    {
        gets(matriz[i][0]); 
        gets(matriz[i][1]); 
        gets(matriz[i][2]); 

    }
    for (i = 0; i < 100; i++)
    {
        if (cidade == matriz[i][2])
        {
            continue;
        } else
        {
            printf(cidade);
        }
    }

    return 0;
}