#include <stdio.h>

int main(){

    int h;

    printf("Enter the height:\n");
    scanf("%d", &h);

    printf("The pattern is:\n");
    
    int cnt = 0;

    for (int i = 1; i <= h; i++){

        for (int j = i; j <= i + cnt; j++)
            printf("%d", j%10);

        printf("\n");
        cnt++;
    }

    return 0;

}