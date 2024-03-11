#include <stdio.h>

int main(){

    int h;

    puts("Enter the height:");
    scanf("%d", &h);

    puts("The pattern is:");
    int pattern = 1;

    for (int i = 0; i < h; i++){

        for (int j = 0; j < h - i - 1; j++)
            printf(" ");

        for (int j = 0; j < pattern; j++)
            if (i % 2)
                if (j % 2)
                    printf("+");
                else
                    printf("=");
            
            else
                if (j % 2)
                    printf("=");
                else
                    printf("+");

        pattern += 2;
        printf("\n");
    }

    return 0;

}