#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void distribution(int a[], int cnt){

	srand(time(NULL));
	
	for (int i = 0; i < cnt; i++)
		a[(rand() % 100) / 10]++;
	
}

void print(int s[]){
	
	for (int i = 0; i < 10; i++){
		
		switch(i){
			
			case 0: printf("0-9      |"); break;
			case 1: printf("10-19    |"); break;
			case 2: printf("20-39    |"); break;
			case 3: printf("30-49    |"); break;
			case 4: printf("40-49    |"); break;
			case 5: printf("50-59    |"); break;
			case 6: printf("60-69    |"); break;
			case 7: printf("70-79    |"); break;
			case 8: printf("80-89    |"); break;
			case 9: printf("90-99    |"); break;

		}
		
		for (int j = 0; j < s[i]; j++)
			printf("*");
			
		printf("\n");
		
	}
	
}

int main(){
	
	int n;
	
	puts("Enter the number of integers:");
	scanf("%d", &n);
	
	int array[10] = {0};
	
	distribution(array, n);
	print(array);
	
}

