#include <stdio.h>

int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);

int main(){

   int x, y, result = -1;       
   
   printf("Enter 2 numbers: \n");
   scanf("%d %d", &x, &y);
   printf("gcd1(): %d\n", gcd1(x, y));  
   gcd2(x,y,&result);
   printf("gcd2(): %d\n", result);       
   return 0;
}
int gcd1(int num1, int num2)  
{
    int gcd = 1;

    for (int i = 2; i <= 10; i++)
        if ( !(num1 % i) && !(num2 % i))
            gcd = i;

    return gcd;
}

void gcd2(int num1, int num2, int *result)  
{
   *result = gcd1(num1, num2);
}