#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time, end_time;
    double total_time;

    int i;
    int count = 100000;
    int increment = 2;
    int number = 0;

    start_time = clock(); // Início da contagem do tempo

    for (i = 0; i < count; i++) {
        number += increment;
    }

    end_time = clock(); // Fim da contagem do tempo

    total_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Tempo necessário: %f segundos\n", total_time);

    return 0;
}
