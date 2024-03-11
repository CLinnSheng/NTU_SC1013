#include <stdio.h>
#include <math.h>

int main(){

    int n;
    int decimal_ttl = 0, cnt = 0;
    int result = 0;

    puts("Enter an octal number:");
    scanf("%d", &n);


    while(n > 0){
        decimal_ttl += (n % 10) * pow(8, cnt++);
        n /= 10;
    };

    cnt = 0;
    while(decimal_ttl > 0){

        result += (decimal_ttl % 2) * pow(10, cnt++);
        decimal_ttl /= 2;

    }

    printf("The equivalent binary number: %d", result);
}