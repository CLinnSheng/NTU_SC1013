#include <stdio.h>

int main(){

    int n;
    
    printf("Enter a number (between 1 and 9):\n");
    scanf("%d", &n);

    printf("Multiplication Table:\n\t");
    
    for (int i = 1; i <= n; i++)
        printf("%d ", i);

    
    for (int i = 0; i < n; i++){
        printf("\n%d %d ", i+1, i+1);
        int ttl = i+1;

        for (int j = 0; j < i; j++){
            ttl += i + 1;
            printf("%d ", ttl);
        }

    }

    return 0;
}