#include <stdio.h>

int main(){

    int h;

    puts("Enter the height:");
    scanf("%d", &h);

    puts("The pattern is:");
    
    for (int i = 1; i <= h; i++){
        for (int j = 0; j < h - i; j++)
            printf("*");
        for (int j = 0; j < i; j++)
            printf("=");

        printf("\n");
    }
}