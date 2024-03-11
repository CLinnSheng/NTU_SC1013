#include <stdio.h>
void printChart(int x, int y, int z);
int main()
{
 int x,y,z;
 printf("Enter 3 inputs: \n");
 scanf("%d %d %d", &x, &y, &z);
 printf("The bar chart is: \n");
 printChart(x,y,z);
 return 0;
} 
void printChart(int x, int y, int z){

    int max;

    if (x > y)
        if (y > z)
            max = x;
        else
            if (z > x)
                max = z;
            else
                max = x;

    else
        if (x > z)
            max = y;
        else
            if (z > y)
                max = z;
            else
                max = y;

    for (int i = 0; i < max; i++){
        for (int j = 0; j < 3; j++)
            switch(j){
                
                case 0:
                    if (x + i >= max)
                        printf("*");
                    else
                        printf(" ");
                    
                    break;

                case 1:
                    if (y + i >= max)
                        printf("*");
                    else
                        printf(" ");
                    break;

                case 2:
                    if (z + i >= max)
                        printf("*");
                    else
                        printf(" ");
                    break;
            }

        printf("\n");
    }
}