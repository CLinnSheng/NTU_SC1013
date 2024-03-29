#include <stdio.h>
#include <math.h>

int main(){

    int a1, b1, c1, a2, b2, c2;

    printf("Enter a1,b1,c1,a2,b2,c2:\n");
    scanf("%d%d%d%d%d%d", &a1, &b1, &c1, &a2, &b2, &c2);

    if ((a1 * b2 - a2 * b1) == 0){
        printf("Denominator is zero!");
        return;
    }
    
    float x = (float)(b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    float y = (float)(a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

    printf("x=%.2f,y=%.2f", x, y);

    return 0;
}