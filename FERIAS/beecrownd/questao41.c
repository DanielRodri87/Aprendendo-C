// Ricardo e Vicente são aficionados por figurinhas. Nas horas vagas, eles arrumam um jeito de jogar um “bafo” ou algum outro jogo que envolva tais figurinhas. Ambos também têm o hábito de trocarem as figuras repetidas com seus amigos e certo dia pensaram em uma brincadeira diferente. Chamaram todos os amigos e propuseram o seguinte: com as figurinhas em mãos, cada um tentava fazer uma troca com o amigo que estava mais perto seguindo a seguinte regra: cada um contava quantas figurinhas tinha. Em seguida, eles tinham que dividir as figurinhas de cada um em pilhas do mesmo tamanho, no maior tamanho que fosse possível para ambos. Então, cada um escolhia uma das pilhas de figurinhas do amigo para receber. Por exemplo, se Ricardo e Vicente fossem trocar as figurinhas e tivessem respectivamente 8 e 12 figuras, ambos dividiam todas as suas figuras em pilhas de 4 figuras (Ricardo teria 2 pilhas e Vicente teria 3 pilhas) e ambos escolhiam uma pilha do amigo para receber.
// Entrada
// A primeira linha da entrada contém um único inteiro N (1 ≤ N ≤ 3000), indicando o número de casos de teste. Cada caso de teste contém 2 inteiros F1 (1 ≤ F1 ≤ 1000) e F2 (1 ≤ F2 ≤ 1000) indicando, respectivamente, a quantidade de figurinhas que Ricardo e Vicente têm para trocar.

// Saída
// Para cada caso de teste de entrada haverá um valor na saída, representando o tamanho máximo da pilha de figurinhas que poderia ser trocada entre dois jogadores.

#include <stdio.h>

int main()
{
    int n, f1, f2, i, j, k, l, m, aux, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d %d", &f1, &f2);
        if (f1>f2)
        {
            aux = f1;
            f1 = f2;
            f2 = aux;
        }
        if (f1%2==0)
        {
            aux2 = f1/2;
            if (f2%2==0)
            {
                aux3 = f2/2;
                if (aux2>aux3)
                {
                    printf("%d\n", aux3);
                } else
                {
                    printf("%d\n", aux2);
                }
            } else
            {
                aux4 = f2/3;
                if (aux2>aux4)
                {
                    printf("%d\n", aux4);
                } else
                {
                    printf("%d\n", aux2);
                }
            }
        } else
        {
            aux5 = f1/3;
            if (f2%2==0)
            {
                aux6 = f2/2;
                if (aux5>aux6)
                {
                    printf("%d\n", aux6);
                } else
                {
                    printf("%d\n", aux5);
                }
            } else
            {
                aux7 = f2/3;
                if (aux5>aux7)
                {
                    printf("%d\n", aux7);
                } else
                {
                    printf("%d\n", aux5);
                }
            }
        }
    }
    return 0;
}