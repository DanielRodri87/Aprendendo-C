#include <stdio.h>

int main() {
    int quantidade_alunos;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);

    int i = 0;
    float nota1, nota2, nota3;
    float media, maior_media = 0, menor_media = 100;
    int qAprovados = 0, qReprovados = 0;

    while (i < quantidade_alunos) {
        printf("Digite as notas do aluno %d:\n", i  + 1);
        
        int j = 0;
        float soma_notas = 0;
        while (j < 3) {
            printf("Nota %d: ", j + 1);
            float nota;
            scanf("%f", &nota);
            soma_notas += nota;
            j++;
        }
        
        media = soma_notas / 3;

        if (media > maior_media) {
            maior_media = media;
        }
        if (media < menor_media) {
            menor_media = media;
        }

        if (media >= 7) {
            qAprovados++;
        } else {
            qReprovados++;
        }

        i++;
    }


    printf("A maior média foi: %.2f\n", maior_media);
    printf("A menor média foi: %.2f\n", menor_media);
    printf("A quantidade de alunos aprovados foi: %d\n", qAprovados);
    printf("A quantidade de alunos reprovados foi: %d\n", qReprovados);

    return 0;
}
