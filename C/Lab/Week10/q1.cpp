#include <stdio.h>
#define INIT_VALUE -1000

int findAr1D(int, int [], int);

int main(){
	
	int ar[20];
	int size, i, target, result = INIT_VALUE;
	
	printf("Enter array size:\n");
	scanf("%d", &size);
	
	printf("Enter %d data:\n", size);
	for (int i = 0; i < size; i++)
		scanf("%d", &ar[i]);
		
	printf("Enter the target number:\n");
	scanf("%d", &target);
	
	result = findAr1D(size, ar, target);
	
	if (result == -1)
		printf("findAr1D():Not found\n");
	else
		printf("findAr1D():%d\n", result);
		
	return 0;
		
}

int findAr1D(int size, int ar[], int target){
	
	for (int i = 0; i < size; i++)
		if (ar[i] == target)
			return i;
			
	return -1;
}