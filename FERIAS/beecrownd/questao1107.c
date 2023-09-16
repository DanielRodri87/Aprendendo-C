// bloco a 5mm altura x 8mm de comprimento
// Em cada varredura, 1mm de massa é removida

// ENTRADA:
// duas entradas (a c) alturaxcomprimento
// segunda entrada, é por meio do comprimento (looping para pegar medida por medida)
// Cada entrada, é a altura de cada coluna horizontal

// SAIDA:
// Devo contar quantas camdas de profundidade, e ver em quais casos preciso de mais de um furo por camada

#include <stdio.h>

int main()
{
    int a, c, i, menor, qtd = 0, repete = 0;

    scanf("%d %d", &a, &c);
    int valt[c];

    for (i = 0; i<c;i++)
    {
        scanf("%d", &valt[i]);
        if (i == 0)
        {
            menor = valt[i];

        }
        else if (valt[i] < menor)
        {
            menor = valt[i];
        }

    }

    for (i = 0; i<c;i++)
    {
        if (valt[i] == menor)
        {
            repete++;
            if (i == i-1)
            {
                repete--;
            }
        }
    }

    qtd = a-menor+repete;



    printf("%d\n", qtd);


    return 0;
}