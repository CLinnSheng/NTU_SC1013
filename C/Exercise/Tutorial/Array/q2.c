#include <stdio.h>
#define SIZE 10

void transpose2D(int [][SIZE], int, int);
void display(int [][SIZE], int, int);

int main(){

    int ar[SIZE][SIZE], rowSize, colSize;
    int i, j;

    printf("Enter the row size of the 2D array:\n");
    scanf("%d", &rowSize);

    printf("Enter the column size of the 2D array:\n");
    scanf("%d", &colSize);

    printf("Enter the matrix (%dx%d):\n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for(j = 0; j < colSize; j++)
            scanf("%d", &ar[i][j]);
    
    printf("transpose2D():\n");
    transpose2D(ar, rowSize, colSize);
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

void transpose2D(int ar[][SIZE], int rowSize, int colSize){

//    int temp_ar[rowSize][colSize];
//	
//	for (int i = 0; i < rowSize; i++)
//        for (int j = 0; j < colSize; j++)
//            temp_ar[i][j] = ar[i][j];
//
//    for (int i = 0; i < rowSize; i++)
//        for (int j = 0; j < colSize; j++)
//            ar[i][j] = temp_ar[j][i];

//	/* tuto way
	int temp;
	
	for (int i = 1; i < rowSize; i++)
		for (int j = 0; j < i; j++){
		temp = ar[i][j];
		ar[i][j] = ar[j][i];
		ar[j][i] = temp;
		}
//	*/
}