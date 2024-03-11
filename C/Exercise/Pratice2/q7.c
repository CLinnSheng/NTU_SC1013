#include  <stdio.h>
int sumSqDigits1(int num);    
void sumSqDigits2(int num, int *result);    

int main(){

   int num, result;

   printf("Enter a number: \n");
   scanf("%d", &num);
   printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
   sumSqDigits2(num, &result);
   printf("sumSqDigits2(): %d\n", result);

   return 0;
}

int sumSqDigits1(int num){
    
    int ttl = 0;

    while (num > 0){

        int n = num % 10;
        ttl += n * n;

        num /= 10;
    };

    return ttl;
}

void sumSqDigits2(int num, int *result){
    *result = sumSqDigits1(num);
}