#include <stdio.h>

int main(){

    int studentID = 0, mark;
    char grade;

    printf("Enter Student ID: \n");
    scanf("%d", &studentID);
    
    while (studentID != -1){

        printf("Enter Mark: ");
        scanf("%d", &mark);

        switch(mark){

            case 75 ... 100:
                printf("Grade = A\n");
                break;

            case 65 ... 74:
                printf("Grade = B\n");
                break;

            case 55 ... 64:
                printf("Grade = C\n");
                break;

            case 45 ... 54:
                printf("Grade = D\n");
                break;

            default:
                printf("Grade = F\n");
            
        }
            
        printf("Enter Student ID: \n");
        scanf("%d", &studentID);

    };
    
    return 0;
    
}