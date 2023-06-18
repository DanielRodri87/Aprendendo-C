#include <stdio.h>
#include <time.h>

void collatzSequence(int n) {
  printf("%d ", n);

  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = (3 * n) + 1;
    }
    printf("%d ", n);
  }
}

int main() {
  int n = 9999999;

  clock_t start_time = clock();
  collatzSequence(n);
  clock_t end_time = clock();

  double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

  printf("\n\nTempo necessário: %.3f segundos\n", time_taken);

  return 0;
}
