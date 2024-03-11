#include <stdio.h>
#include <ctype.h>

int main(){

    printf("Enter a character:\n");
    char input = getchar();

    if (isupper(input))
        printf("Upper case letter\n");
    else if (islower(input))
        printf("Lower case letter\n");
    else if (isdigit(input))
        printf("Digit\n");
    else
        printf("Other character\n");

    return 0;
}