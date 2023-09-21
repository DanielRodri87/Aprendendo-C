#include <stdio.h>

int main()
{
    int altura, comp, i;

    do{
        int laser = 0; 

        scanf("%d %d", &altura, &comp);
        int altb[comp];

        if(altura == 0 && comp == 0){
            break;
        }

        for(i = 0; i < comp; i++){
            scanf("%d", &altb[i]);
        }

        for(i = 0; i < comp; i++){
            if(i == 0){
                if(altb[i] < altura){
                    laser = laser + (altura - altb[i]);
                }
            }
            else{
                if(altb[i] < altb[i - 1]){
                    laser = laser + (altb[i - 1] - altb[i]);
                }
            }
        }

        printf("%d\n", laser);
    }while(1);

    return 0;
}