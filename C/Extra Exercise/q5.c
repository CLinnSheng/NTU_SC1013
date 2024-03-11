#include <stdio.h>
#define N 20
int remDuplicates(int a[], int size);
int main()
{
 int a[N],i,size;

 printf("Enter array size: \n");
 scanf("%d",&size);
 printf("Enter %d data:\n",size);
 for (i=0; i<size; i++)
 scanf("%d",&a[i]);
 size=remDuplicates(a,size);
 printf("remDuplicates(): \n");
 for (i=0; i<size; i++)
 printf("%d ",a[i]);
 printf("\n");
 return 0;
}

int remDuplicates(int a[], int size){

    int cnt = 0;

    for (int i = 0; i < size - 1; i++)
        if (a[i] != a[i + 1])
            a[cnt++] = a[i];

    a[cnt++] = a[size - 1];
    return cnt;
}