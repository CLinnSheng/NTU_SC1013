#include <stdio.h>
#define SIZE 5

void findMinMax2D(int [][SIZE], int *, int *);

int main(){

    int A[SIZE][SIZE];
    int i, j, min, max;

    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);

    findMinMax2D(A, &min, &max);

    printf("min = %d\nmax = %d", min, max);

    return 0;

}

void findMinMax2D(int ar[][SIZE], int *min, int *max){

    *min = 9999;
    *max = -9999;

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++){

            if (*min > ar[i][j])
                *min = ar[i][j];

            if (*max < ar[i][j])
                *max = ar[i][j];
        }

}