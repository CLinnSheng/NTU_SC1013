#include <stdio.h>
#include <math.h>

int fac(int n)
{
    if (n == 0)
        return 1;
    
    else
        return n * fac(n-1);

}

int main()
{

    float x, result = 0;

    printf("Enter x:\n");
    scanf("%f", &x);

    for (int i = 0; i < 11; i++)
        result += pow(x, i) / fac(i);

    printf("Result = %.2f", result);

}