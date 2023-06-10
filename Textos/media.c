#include <stdio.h>

int main(){
    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1+n2)/2;
    if (media < 0 || media > 10){
        if (media < 4.0) {
            printf("Reprovado\n");
        } else if (media >= 4.0 && media < 7.0){
            printf("Recuperação\n");
        } else {
            printf("Aprovado\n");
        }
    } else {
        printf("Média inválida\n");
    }

    return 0;
}