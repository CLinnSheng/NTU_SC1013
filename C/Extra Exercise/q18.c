#include <stdio.h>
#include <math.h>

int fac(int n){
    
    if (n == 0)
        return 1;

    return n * fac(n - 1);
}

int main(){

    double number, result = 1;

    puts("Enter a number:");
    scanf("%lf", &number);

    for (int i = 1; i <= 20; i++){

        if (i % 2)
            result -= pow(number, i) / fac(i);
        
        else
            result += pow(number, i) / fac(i);

    }

    printf("Result = %.2lf", result);

    return 0;

}