#include <stdio.h>
#define M 80
int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2);
int main()
{
 int a[M],b[M],c[M],i,k=0,n1,n2;
 printf("Enter the size of array a: \n");
 scanf("%d", &n1);
 printf("Enter the size of array b: \n");
 scanf("%d", &n2);
 printf("Enter array a[%d]: \n", n1);
 for (i=0; i<n1; i++)
 scanf("%d",&a[i]);
 printf("Enter array b[%d]: \n", n2);
 for (i=0; i<n2; i++)
 scanf("%d",&b[i]);
 k=mergeArrays(a,b,c,n1,n2);
 printf("mergeArrays(): \n");
 for (i=0;i<k;i++)
 printf("%d ",c[i]);
 return 0;
} 

int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2)
{
    int cnt = 0;

    for (int i = 0; i < n1; i++) c[cnt++] = a[i];
    for (int i = 0; i < n2; i++) c[cnt++] = b[i];
    
    for (int i = 0; i < cnt -1; i++){

        for (int j = 0; j < cnt - 1 - i; j++)
            if (c[j] > c[j+1]){
                int temp = c[j + 1];
                c[j + 1] = c[j];
                c[j] = temp;
            }

    }

    return cnt;
}