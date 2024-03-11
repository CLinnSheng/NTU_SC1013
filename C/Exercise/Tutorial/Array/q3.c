#include <stdio.h>
#define SIZE 10

void reduceMatrix2D(int [][SIZE], int, int);
void display(int [][SIZE], int, int);

int main(){

    int ar[SIZE][SIZE], rowSize, colSize;
    int i, j;

    printf("Enter row size of the 2D array:\n");
    scanf("%d", &rowSize);

    printf("Enter column size of the 2D array:\n");
    scanf("%d", &colSize);

    printf("Enter the matrix (%dx%d):\n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &ar[i][j]);

    reduceMatrix2D(ar, rowSize, colSize);
    
    printf("reduceMatrix2D():\n");
    display(ar, rowSize, colSize);

    return 0;

}

void display(int ar[][SIZE], int rowSize, int colSize){

    for (int i = 0; i < rowSize; i++){

        for (int j = 0; j < colSize; j++)
            printf("%d ", ar[i][j]);

        printf("\n");

    }

}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize){

    for (int i = 0; i < colSize; i++){

        int ttl = 0;

        for (int j = rowSize - 1; j > i; j--){
            ttl += ar[j][i];
            ar[j][i] = 0;
        }

        ar[i][i] += ttl;
    }

}