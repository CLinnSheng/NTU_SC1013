#include <stdio.h>
#include <math.h>

int main(){

    int number;

    puts("Enter an octal number:");
    scanf("%d", &number);

    int index = 0, ttl = 0;

    while (number > 0){

        int n = number % 10;
        ttl += n * pow(8, index++);

        number /= 10;

    }

    printf("The equivalent decimal number: %d", ttl);
    
    return 0;

}