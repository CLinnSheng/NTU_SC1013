#include <stdio.h>
#include <ctype.h>

int main(){

    char str[50];

    printf("Enter your characters (# to end):\n");
    gets(str);

    int i = 0, d = 0, l = 0;

    while(str[i] != '#'){

        if (isdigit(str[i]))
            d++;
        
        if (isalpha(str[i]))
            l++;

        i++;
    };

    printf("The number of digits: %d", d);
    printf("\nThe number of letters: %d", l);

    return 0;
}