#include <stdio.h>

int main(){

    int h;
    int n = 1;

    printf("Enter the height:\n");
    scanf("%d", &h);
    printf("Pattern:\n");
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%d", n);

        printf("\n");
        n++;
        
        if (!(n%4))
            n = n%4 + 1;
        
    }

    return 0;
}