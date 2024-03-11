#include <stdio.h>
#define PAY 6

int main(){

    int hours;
    float gross_pay, tax;

    printf("Enter hours of work:\n");
    scanf("%d", &hours);

    if (hours <= 40)
        gross_pay = hours * PAY;
    
    else
        gross_pay = 40 * PAY + (hours - 40) * 9;

    if (gross_pay <= 1000)
        tax  = gross_pay * 0.1;
    
    else
        if (gross_pay <= 1500)
            tax = 1000 * 0.1 + (gross_pay - 1000) * 0.2;
        else
            tax = 1000 * 0.1 + 500 * 0.2 + (gross_pay - 1500) * 0.3;

    printf("Gross pay=%.2f\n", gross_pay);
    printf("Tax=%.2f\n", tax);
    printf("Net pay=%.2f", gross_pay - tax);

    return 0;
}