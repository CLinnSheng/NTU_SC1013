#include <stdio.h>
int platform1D(int ar[], int size);
int main()  
{
   int i,b[50],size;
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)  
      scanf("%d",&b[i]);
   printf("platform1D(): %d\n", platform1D(b,size));
   return 0;
}

int platform1D(int ar[], int size){

    int cnt[size];

    if (size == 1)
        return 1;

    for (int i = 0; i < size - 1; i++){

        cnt[i] = 1;

        for (int j = i + 1; j < size; j++)
            if (ar[i] == ar[j])
                cnt[i]++;

            else
                break;

    }

    int max = -999;

    for (int i = 0; i < size; i++)
        if (max < cnt[i])
            max = cnt[i];
    
    return max;
}