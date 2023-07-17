//  Escreva um programa em C que determine se um ano fornecido pelo usuário é bissexto ou não utilizando um loop `for` e uma estrutura `switch`.

#include <stdio.h>

int main(void) {
  int ano;
  printf("Digite o ano: ");
  scanf("%d", &ano);
  if (ano % 4 == 0) {
    if (ano % 100 == 0) {
      if (ano % 400 == 0) {
        printf("O ano %d é bissexto", ano);
      } else {
        printf("O ano %d não é bissexto", ano);
      }
    } else {
      printf("O ano %d é bissexto", ano);
    }
  } else {
    printf("O ano %d não é bissexto", ano);
  }
  return 0;
}