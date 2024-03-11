#include <stdio.h>
#include <math.h>

int main(){

    int n;
    puts("Enter a binary number:");
    scanf("%d", &n);

    int _3digit = 0, cnt = 0;
    int _3ttl = 0, ttl = 0;
    while (n > 0){

        if (_3digit == 3){
            
            ttl += _3ttl * pow(10, cnt++);
            _3ttl = 0; _3digit = 0;

        }
        
        _3ttl += n % 10 * pow(2, _3digit++);
        n /= 10;

    }

    if (_3digit != 0)
        ttl += _3ttl * pow(10, cnt++);

    printf("The equivalent octal number: %d", ttl);

    return 0;
}