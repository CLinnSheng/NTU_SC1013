#include <stdio.h>

float power1(float num, int p);
void power2(float num, int p, float *result);

int main(){

   int power;
   float number, result = -1;
    
   printf("Enter the number and power: \n");
   scanf("%f %d", &number, &power);
   printf("power1(): %.2f\n", power1(number, power));                           
   power2(number,power,&result);
   printf("power2(): %.2f\n", result);               
   return 0;
}

float power1(float num, int p){
    
    float ttl;

    if (p >= 0){

        ttl = num;

        if (p == 0)
            return 1;
        else
            for (int i = 1; i < p; i++)
                ttl *= num;
    }

    else{

        ttl = 1 / num;

        for (int i = 1; i < p; i++)
            ttl *= 1 / num;
    }

    return ttl;
}

void power2(float num, int p, float *result){
    *result = power1(num, p);
}