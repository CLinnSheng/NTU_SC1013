#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);

int main(){

   int num, digit, result = -1;
    
   printf("Enter the number: \n");
   scanf("%d", &num);      
   
   printf("Enter k position: \n");
   scanf("%d", &digit);    
   
   printf("digitValue1(): %d\n",  digitValue1(num, digit));
   digitValue2(num, digit, &result);
   
   printf("digitValue2(): %d\n", result);    
   
   return 0;
}

int digitValue1(int num, int k){

    int pos = 1;

    while (num > 0){

        if (num % 10 == k)
            return pos;

        num /= 10;
        pos++;
    }

    return 0;
}

void digitValue2(int num, int k, int *result){
    *result = digitValue1(num, k);
}