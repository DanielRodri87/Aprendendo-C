// 1072

#include <stdio.h>
int main (){
    int n, x, i = 0, in = 0, out = 0;
    scanf("%d", &n);
    while (i < n){
        scanf("%d", &x);
        if (x >= 10 && x <= 20){
            in = in + 1;
        } else {
            out = out + 1;
        }
        i = i + 1;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    

    return 0;
}