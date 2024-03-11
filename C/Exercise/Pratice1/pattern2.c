#include <stdio.h>

int main(){

    int h;
    int cnt = 0;

    printf("Enter the height:\n");
    scanf("%d", &h);

    printf("The pattern is:\n");
    
    for (int i = 0; i < h; i++){
        for(int j = i; j <= i + cnt; j++)
            if (!(j % 2))
                putchar('A');
            else
                putchar('B');

        printf("\n");
        cnt++;

    }

    return 0;

}