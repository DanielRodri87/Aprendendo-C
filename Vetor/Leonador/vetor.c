//  Vetor é uma estrutra de dados linear que necessita de somente um indice para que seus elementos sejam endereçados.

//  É utilizado para armazenar uma lista de valores do mesmo tipo, ou seja, o tipo vetor permite armazena mais de um valor em uma mesma variável.


//  Número fixo de células idênticas.

// Cada célula armazena um e somente um dos valores de dados do vetor

//  Cada uma das células de um vetor possui seu próprio endereço, ou indice, através do qual pode ser referenciada.

// Nessa estrutura todos os elementos são do mesmo tipo, e cada um pode receber um valor diferente.

// Exemplo 1: Vetor de notas de alunos

#include <stdio.h>

int ex1(){
    
    float notas[4] = {7.5, 8.0, 9.5, 10.0};

    printf("Notas[0] = %.2f\n", notas[0]); // Notas[0] = equivale ao 1° índice do vetor, que é a nota 7.5
    printf("Notas[1] = %.2f\n", notas[1]);
    printf("Notas[2] = %.2f\n", notas[2]);
    printf("Notas[3] = %.2f\n", notas[3]);

    return 0;
}

// Algumas caracteristicas do tipo vetor vetor([10]);
// Alocação estática
// Estrutura homogênia
// Alocação sequencial



