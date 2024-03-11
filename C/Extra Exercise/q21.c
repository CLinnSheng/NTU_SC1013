#include <stdio.h>
#define N 20
int main(){

    int a[N],i,j,k,m;
    int size;
    
    /* Write your code here – for additional local variables */
    
    printf("Enter array size: \n");
    scanf("%d",&size);

    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d", &a[i]);

    printf("Result: \n");

    for (i = 0; i < size; i++){

        int temp = *(a + size - 1);

        for (j =4; j > 0; j--)
            *(a + j) = *(a + j -1);

        *(a + j) = temp;

        for (k = 0; k < size; k++)
            printf("%d", a[k]);

        printf("\n");
    }
    
/* Write your code here */
return 0;
} 