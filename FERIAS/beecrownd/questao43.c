// Watson, Crick e Wilkins receberam em 1962 o prêmio Nobel de Medicina especialmente pelo seu trabalho que resultou na descoberta da estrutura das moléculas do DNA e na sua importância na transmissão de informações entre as gerações de seres vivos. Watson e Crick publicaram na revista “Nature” em 1953 o artigo em que mostravam que a molécula de DNA apresentava uma estrutura de dupla hélice. O artigo assume enorme importância nos dias de hoje, especialmente depois dos vários avanços na área.

// Muitas pesquisas têm sido feitas na área de Bioinformática ligadas à descoberta da sequência de bases que compõem as moléculas de DNA dos vários seres vivos. Em especial, a estrutura destas moléculas tem sido usada para compor teorias de como os seres vivos evoluíram e quais têm ancestrais comuns. Acredita-se que os seres vivos presentes hoje no planeta podem descender de ancestrais comuns, sendo que as modificações nos seus respectivos DNAs são devidas a fenômenos de mutação ocorridos durante a evolução. Muitos biólogos acreditam no princípio da parcimônia, que diz que o número destas mutações deve ser o mínimo possível, uma vez que a Natureza busca, de certa forma, o caminho “mais barato” para a modificação desejada.

// Sua tarefa neste problema é auxiliar os pesquisadores na tarefa de determinar se duas sequências de DNA podem ter um ancestral comum. Considere dadas duas sequências (podemos imaginar como sequências de números inteiros). O seu objetivo é determinar o menor número de trocas de elementos de uma das sequências (os elementos não precisam estar em posições adjacentes na sequência) que leva uma das sequências na outra. Observe que podemos considerar uma das sequências fixa (por exemplo, em ordem crescente), dessa forma buscamos o número mínimo de tais trocas que ordena a sequência dada.

// Entrada
// A entrada é composta por diversas instâncias. A primeira linha da entrada contém um inteiro T indicando o número de instâncias. A primeira linha de cada instância possui um inteiro N (1 ≤ N ≤ 10000) indicando o número de inteiros na sequência. A segunda linha contém uma permutação dos inteiros 1, 2, ... , N separados por espaço.

// Saída
// Para cada instância imprima uma linha contendo o número mínimo de tais trocas que ordena a sequência dada.

#include <stdio.h>

int main(){
    int t, n, i, j, k, l, m, aux, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10;
    scanf("%d", &t);
    for (i=0;i<t;i++){
        scanf("%d", &n);
        int v[n];
        for (j=0;j<n;j++){
            scanf("%d", &v[j]);
        }
        int cont = 0;
        for (j=0;j<n;j++){
            for (k=j+1;k<n;k++){
                if (v[j]>v[k]){
                    aux = v[j];
                    v[j] = v[k];
                    v[k] = aux;
                    cont++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cont);
    }
    return 0;
}