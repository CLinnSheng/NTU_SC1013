#include <stdio.h>

int main(){

    int n;

    printf("Enter number of lines:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i ++)
    {

        float ttl = 0;
        int cnt = 0;

        printf("Enter line %d (end with -1):\n", i + 1);
            
        while (1){
            
            int input;

            scanf("%d", &input);

            if (input != -1)
            {
                ttl += input;
                cnt ++;
            }
            else
                break;

        };

        printf("Average = %.2f\n", ttl/cnt);

    }

    return 0;

}