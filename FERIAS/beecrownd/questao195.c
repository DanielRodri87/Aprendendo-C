#include <stdio.h>
#include <string.h>
#define X 'X'
#define O 'O'

int main() {
  char tab[3];
  toupper(tab);
  scanf("%s", tab);

  if (tab[0] != X || tab[1] == O + 'a' - 'A' || tab[2] == O + 'a' - 'A') {
    printf("?\n");
    return 0;
  }

  if (tab[0] == tab[1]) {
    printf("Alice\n");
    return 0;
  }

  if (tab[1] == tab[2]) {
    printf("Bob\n");
    return 0;
  }

  if (tab[0] != tab[1] && tab[1] != tab[2] && tab[0] != (X + 'a' - 'A') && tab[1] != (X + 'a' - 'A') && tab[2] != (X + 'a' - 'A')) {
    printf("*\n");
    return 0;
  }

  printf("?\n");
  return 0;
}
