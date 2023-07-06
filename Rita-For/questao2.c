#include <stdio.h>
int main(){
    float paisA=5000000, paisB=7000000;
    int tempo=0;
// 
    do
    {
        paisA = paisA + (0.03*paisA);
        paisB =paisB + (0.02*paisB);
        tempo=(tempo+1);
    } while (paisB > paisA); 

    printf("O tempo necessario eh: %d\n", tempo);
    printf("Pais A tem %.2f habitantes\n", paisA);
    printf("Pais B tem %.2f habitantes\n", paisB);



    return 0;

}