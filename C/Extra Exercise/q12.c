#include <stdio.h>

int main(){

    int h;
    int odd = 0;

    puts("Enter the height:");
    scanf("%d", &h);

    puts("The pattern is:");

    for (int i = 0; i < h; i++){

        for (int j = 0; j < h - 1 - i; j++)
            printf(" ");

        for (int j = 0; j <= odd; j++)
            printf("*");

        odd += 2;
        printf("\n");
    }    
}