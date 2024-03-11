#include <stdio.h>
#include <math.h>
#define INIT_VALUE 999

int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main(){

   int number, result = INIT_VALUE;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extEvenDigits1(): %d\n", extEvenDigits1(number));         
   extEvenDigits2(number, &result);
   printf("extEvenDigits2(): %d\n", result);

   return 0;
}

int extEvenDigits1(int num){

    int ttl = 0, cnt = 0;

    while (num > 0){

        int n = num % 10;

        if (!(n % 2)){
            ttl += n * pow(10, cnt);
            cnt++;
        }

        num /= 10;
    };

    if (ttl == 0)
        return -1;
    else
        return ttl;
}

void extEvenDigits2(int num, int *result){
    *result = extEvenDigits1(num);
}