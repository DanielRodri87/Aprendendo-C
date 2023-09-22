#include <stdio.h>
#include <string.h>

int main() {
    char palavra[20];
    scanf("%s", palavra);
    for (int i = 0; i < strlen(palavra); i++) {
        palavra[i] = tolower(palavra[i]);
    }
    if (strcmp(palavra, "oposicao") == 0 || strcmp(palavra, "contrariedade") == 0) {
        printf("mas\n");
    } else if (strcmp(palavra, "quantidade") == 0 || strcmp(palavra, "intensidade") == 0) {
        printf("mais\n");
    }
    return 0;
}