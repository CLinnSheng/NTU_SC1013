#include <stdio.h>
#include <math.h>
int main(){

    int d, cnt = 0;
    long int bin = 0;

    puts("Enter a decimal number:");
    scanf("%d", &d);

    while (d > 0){

        bin += (d % 2) * pow(10, cnt++);
        d /= 2;

    };

    printf("The equivalent octal number: %li", bin);

    return 0;
}