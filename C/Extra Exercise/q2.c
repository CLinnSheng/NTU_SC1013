#include <stdio.h>
#include <math.h>
int main(){

    int d, oct = 0;
    int cnt = 0;

    puts("Enter a decimal number:");
    scanf("%d", &d);

    while (d > 0){

        oct += (d % 8) * pow(10, cnt++);
        d /= 8;

    };

    printf("The equivalent octal number: %d", oct);

    return 0;
}