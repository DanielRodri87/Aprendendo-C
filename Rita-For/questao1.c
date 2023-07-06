#include <stdio.h>

int main(){
    float alturachico=1.70, alturajuca=1.10;
    int anos=0;
    while (alturachico > alturajuca){
        anos = anos+1;

        alturachico = alturachico + 0.02;
        alturajuca = alturajuca + 0.03;
    }

    printf("Passaram-se %d ano(s)\n", anos);
    // 00000000000000000000000000000000000000000000000000000000
    return 0;
}