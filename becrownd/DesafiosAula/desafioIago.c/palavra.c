
#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20], palavraInvertida[20];
    int i, j, tamanho; // i = indice, j = indice invertido, tamanho = tamanho da palavra

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra); //Len = tamanho da string

    for(i = 0, j = tamanho - 1; i < tamanho; i++, j--){ // No python sempre usei o for decrementando para inverter coisas, no C não é diferente
        palavraInvertida[i] = palavra[j]; // A palavra invertida recebe a palavra digitada, porém invertida, esse [i] representa o indice da palavra digitada, e o [j] o indice invertido, tipo como fosse a posição da letra na palavra
        // por exemplo: Daniel, o indice da letra D é 0 (toda linguagem de programação conta a partir do zero), e o indice invertido é 5, que é o tamanho da palavra - 1
    }

    palavraInvertida[i] = '\0'; // O ultimo indice da palavra invertida recebe o caractere nulo, para indicar o fim da string

    if(strcmp(palavra, palavraInvertida) == 0){ // eu tinha testado comparar: palavra==palavraInvertida, mas não funcionou, então pesquisei e descobri que tem que usar a função strcmp, que compara duas strings, e retorna 0 se forem iguais
        printf("A palavra %s é um palíndromo\n", palavra);
    }else{
        printf("A palavra %s não é um palíndromo\n", palavra);
    }

}