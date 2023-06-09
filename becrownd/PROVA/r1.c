//  entrar com os sexos de várias pessoas (m ou f). Exibit a quantidade de pessoas do sexo masculimo e feminino.
//  O programa termina quando o usuário digitar '@'.

#include <stdio.h>

int main (){
    char sexo = 'n';
    int m = 0, f = 0;

    while (sexo != '@'){
        printf("Digite o sexo (m/f): ");
        scanf(" %c", &sexo);

        if (sexo == 'm' || sexo == 'M'){
            m = m+1;
        } else if (sexo == 'f' || sexo == 'F'){
            f = f+1;
        } else {
            printf("Sexo inválido\n");
        }
    }

    printf("Quantidade de homens: %d\n", m);
    printf("Quantidade de mulheres: %d\n", f);

    return 0;
}
