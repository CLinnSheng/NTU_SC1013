#include <stdio.h>
#define SIZE 10
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum1, int *sum2);
int main()
{
   int ar[SIZE][SIZE], rowSize, colSize;
   int i, j, sum1=0, sum2=0;
    
   printf("Enter row size of the 2D array: \n");
   scanf("%d", &rowSize);
   printf("Enter column size of the 2D array: \n");
   scanf("%d", &colSize);
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &ar[i][j]);
   diagonals2D(ar, rowSize, colSize, &sum1, &sum2);
   printf("sum1=%d; sum2=%d\n",sum1,sum2);
}

void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum1, int *sum2){

    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++){
            if (j == i)
                *sum1 += ar[i][j];
            
            else if (j == colSize - 1 - i)
                *sum2 += ar[i][j];

        }

    if (rowSize % 2)
        *sum2 += ar[rowSize/2][colSize/2];

}
