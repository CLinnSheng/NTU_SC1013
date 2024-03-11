#include <stdio.h>

int main(){

    int h;
    int odd = 1;

    puts("Enter the height:");
    scanf("%d", &h);

    puts("The pattern is:");
    
    for (int i = 1; i <= h; i++){

        for (int j = 0; j < h - 1 - i; j++)
            printf(" ");

        for (int j = i; j <= odd; j++)
            printf("%d", j % 10);

        for (int j = odd -1; j >= i; j--)
            printf("%d", j % 10);

        odd += 2;
        printf("\n");

    }
}