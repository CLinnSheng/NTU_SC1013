#include <stdio.h>

int main(){

    int n;

    printf("Enter number of lines:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        int ttl = 0;
        int cnt, n2 = 0;

        printf("Enter line %d:\n", i + 1);

        scanf("%d", &cnt);
        
        do{
            int n1;
            scanf("%d", &n1);
            ttl += n1;
            n2++;
        } while (n2 < cnt);


        printf("Total: %d\n", ttl);
    
    }
    
    return 0;

}