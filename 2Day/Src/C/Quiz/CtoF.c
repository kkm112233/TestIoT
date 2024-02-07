#include<stdio.h>

int main(){
    
    int C;
    double F;
    for(;;){
    scanf("%d", &C);
    if(C > 0 && C <= 100)
        break;
    }

    F = 9 / 5.0 * C + 32;

    printf("%.2f\n", F);

    return 0;
}
