#include <stdio.h>

int main(){

    int num[2001] = {0},cont,ent,qtd;
    scanf("%d",&qtd);

    for( ; qtd > 0 ; qtd--){
        scanf("%d", &ent);
        num[ent]++;
        }
    for(cont = 0; cont < 2001; cont++){
        if(num[cont] > 0){
            printf("%d aparece %d vez(es)\n",cont,num[cont]);
            }
        }

    return 0;
}