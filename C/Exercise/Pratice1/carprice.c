#include <stdio.h>
#define TAX 1.03

int main(){

    long int price;
    int cat;
    float ttl_price;

    printf("Please enter the list price:\n");
    scanf("%li", &price);

    printf("Please enter the category:\n");
    scanf("%d", &cat);

    if (price >= 100000)
        ttl_price = price * TAX;
    else
        ttl_price = price * 0.90 * TAX;

    switch(cat){

        case 1:
            ttl_price += 70000;
            break;

        case 2:
            ttl_price += 80000;
            break;

        case 3:
            ttl_price += 23000;
            break;
        
        default:
            ttl_price += 600;

    }

    printf("Total price is $%.2f", ttl_price);

    return 0;

}