#include <stdio.h>
#define SIZE 3

void swap2Rows(int [][SIZE], int, int);
void swap2Cols(int [][SIZE], int, int);
void display(int [][SIZE]);

int main(){
	
	int array[SIZE][SIZE];
	int row1, row2, col1, col2;
	int i, j;
	int choice;
	
	printf("Select one of the following options: \n"
		   "1: getinput()\n"
		   "2: swap2Rows()\n"
		   "3: swap2Cols()\n"
		   "4: display()\n"
		   "5: exit()\n");
		   
	do{
		
		printf("Enter your choice:\n");
		scanf("%d", &choice);
		
		switch (choice){
			
			case 1:
				
				printf("Enter the matrix (3x3):\n");
				for (int i = 0; i < SIZE; i ++)
					for (int j = 0; j < SIZE; j++)
						scanf("%d", &array[i][j]);
				
				break;
				
			case 2:
				
				printf("Enter two rows for swapping:\n");
				scanf("%d %d", &row1, &row2);
				
				swap2Rows(array, row1, row2);
				
				printf("The new array is:\n");
				display(array);
				
				break;
				
			case 3:

				printf("Enter two columns for swapping:\n");
				scanf("%d %d", &col1, &col2);
				
				swap2Cols(array, col1, col2);
				
				printf("The new array is:\n");
				display(array);
				
				break;				
				
			case 4:
				display(array);
				break;
				
		}
		
	}while (choice < 5);
	
	return 0;
	
}

void display(int ar[][SIZE]){
	
	for(int i = 0, j = 0; i < SIZE; i++){
		
		for(; j < SIZE; j++)
			printf("%d", ar[i][j]);
		
		printf("\n");
	
	}

}

void swap2Rows(int ar[][SIZE], int r1, int r2){
	
	int temp_row[SIZE];
	
	for (int i = 0; i < SIZE; i++)
		temp_row[i] = ar[r1][i];
		
	for (int i = 0; i < SIZE; i ++){
	
		ar[r1][i] = ar[r2][i];
		ar[r2][i] = temp_row[i];
	
	}
	
}

void swap2Cols(int ar[][SIZE], int c1, int c2){
	
	int temp_col[SIZE];
	
	for (int i = 0; i < SIZE; i++)
		temp_col[i] = ar[i][c1];
		
	for (int i = 0; i < SIZE; i ++){
	
		ar[i][c1] = ar[i][c2];
		ar[i][c2] = temp_col[i];
	
	}
	
}

