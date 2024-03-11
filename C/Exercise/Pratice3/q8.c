#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()  
{
   int ar[50],i,size;
    
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)  
      scanf("%d",ar+i);
   swapMinMax1D(ar, size);
   printf("swapMinMax1D(): ");
   for (i=0; i<size; i++)  
      printf("%d ",*(ar+i));  
   return 0;
}

void swapMinMax1D(int ar[], int size)
{
    int max = -9999, max_index;
    int min = 9999, min_index;

    for (int i = 0; i < size; i++){

        if (max <= ar[i]){
            max = ar[i];
            max_index = i;
        }

        if (min >= ar[i]){
            min = ar[i];
            min_index = i;
        }

    }

    ar[max_index] = min;
    ar[min_index] = max;
}