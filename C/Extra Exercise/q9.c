#include <stdio.h>
int reverseDigits(int num);
int main()
{
   int num, result=999;
   printf("Enter a number: \n");
   scanf("%d", &num);      
   printf("reverseDigits(): %d\n", reverseDigits(num));
   return 0;
}
int reverseDigits(int num){

    int reverse = num % 10;
    num /= 10;

    while (num > 0){

        reverse = reverse * 10 + num % 10;
        num /= 10;

    }

    return reverse;
    
}