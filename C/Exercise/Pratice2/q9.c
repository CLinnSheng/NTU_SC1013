#include <stdio.h>

int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);

int main(){

   int number, result;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
   countEvenDigits2(number, &result);
   printf("countEvenDigits2(): %d\n", result);

   return 0;
}

int countEvenDigits1(int number){

    int n = 0;

    while (number > 0){

        if ( !((number % 10) % 2) )
            n++;
        
        number /= 10;
    };

    return n;
}

void countEvenDigits2(int number, int *count){
    *count = countEvenDigits1(number);
}