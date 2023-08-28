// Mariazinha sabe que um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7 sem que haja resto. Então ela pediu para você fazer um programa que aceite diversos valores e diga se cada um destes valores é primo ou não. Acontece que a paciência não é uma das virtudes de Mariazinha, portanto ela quer que a execução de todos os casos de teste que ela selecionar (instâncias) aconteçam no tempo máximo de um segundo, pois ela odeia esperar.

// Entrada
// A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 200), correspondente ao número de casos de teste. Seguem N linhas, cada uma contendo um valor inteiro X (1 < X < 231) que pode ser ou não, um número primo.

// Saída
// Para cada caso de teste imprima a mensagem “Prime” (Primo) ou “Not Prime” (Não Primo), de acordo com o exemplo abaixo.

#include <stdio.h>

// Função para verificar se um número é primo
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    if (num <= 3) {
        return 1; // 2 e 3 são primos
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Números divisíveis por 2 ou 3 não são primos
    }

    // Verifica divisores potenciais até a raiz quadrada do número
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0; // Número é divisível por i ou i + 2, não é primo
        }
    }

    return 1; // Número passou por todos os testes, é primo
}

int main() {
    int n;
    scanf("%d", &n); // Lê o número de casos de teste

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x); // Lê o valor a ser testado

        if (isPrime(x)) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}
