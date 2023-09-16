#include <stdio.h>

int main()
{
    int altura, comp, i;

    do{
        int laser = 0; // Rapaz, isso só está aqui porque inicializando antes do do-while deu errado

        scanf("%d %d", &altura, &comp);// Altura e comprimento
        int altb[comp];// Altura dos blocos com limite do comprimento

        for(i = 0; i < comp; i++){//Leitura das alturas dos blocos enquanto for menor que o comprimento
            scanf("%d", &altb[i]);//Armazena no vetor
        }

        for(i = 0; i < comp; i++){//Hora do laser
            if(i == 0){//Se for o primeiro bloco
                if(altb[i] < altura){//Se a altura do bloco for menor que a altura do muro
                    laser = laser + (altura - altb[i]);//Laser é igual a altura do muro menos a altura do bloco
                }
            }
            else{//Se não for o primeiro bloco
                if(altb[i] < altb[i - 1]){//Se a altura do bloco for menor que a altura do bloco anterior
                    laser = laser + (altb[i - 1] - altb[i]);//Laser é igual a altura do bloco anterior menos a altura do bloco
                }
            }
        }

        printf("%d\n", laser);
        break;
    }while(altura != 0 && comp != 0);

    return 0;
}