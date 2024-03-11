#include <stdio.h>
#include <stdbool.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()  
{
   int data[SIZE][SIZE];
   int i,j;
   int rowSize, colSize;
   printf("Enter the array size (rowSize, colSize): \n");
   scanf("%d %d", &rowSize, &colSize);  
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &data[i][j]);      
   printf("compress2D(): \n");
   compress2D(data, rowSize, colSize);
   return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize){

    for (int i = 0; i < rowSize; i ++){

        int ttl = 0;
        bool digit; //false for 0, true for 1

        for (int j = 0; j < colSize; j++){

            if (ttl == 0 && data[i][j] == 0){
                digit = false;
                ttl++;
                continue;
            }

            if (ttl == 0 && data[i][j] == 1){
                digit = true;
                ttl++;
                continue;
            }

            if (digit == true){
                
                if (data[i][j] == 1){

                    ttl++;

                    if (j != colSize - 1)
                        continue;
                    else
                        printf("1 %d ", ttl);

                }
                
                else{

                    if (j != colSize - 1){

                        digit = false;
                        printf("1 %d ", ttl);
                        ttl = 1;
                        continue;

                    }
                    
                    else{

                        printf("1 %d ", ttl);
                        printf("0 1 \n");
                        break;

                    }

                }
                
            }

            else if (digit == false){
                
                if (data[i][j] == 0){

                    ttl++;

                    if (j != colSize - 1)
                        continue;
                    else
                        printf("0 %d ", ttl);
                }

                else{
                    
                    if (j != colSize - 1){

                        digit = true;
                        printf("0 %d ", ttl);
                        ttl = 1;
                        continue;

                    }

                    else{

                        printf("0 %d ", ttl);
                        printf("1 1 \n");
                        break;

                    }

                }

            }   

            printf("\n");

        }

    }

}