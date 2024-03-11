#include <stdio.h>
#include <string.h>
void minCharToEnd(char *str);
int main()
{
 char str[80];

 printf("Enter a string: \n");
 scanf("%s",str);
 minCharToEnd(str);
 printf("minCharToEnd(): %s",str);
 return 0;
}

void minCharToEnd(char *str){

    int min = 999;
    char *ptr;

    for (int i = 0; i < strlen(str); i++)
        if (min > *(str + i)){
            min = *(str + i);
            ptr = str + i;
        }

    while (*(ptr + 1) != '\0'){
        *ptr = *(ptr + 1);
        ptr++;
    }

    *ptr = min;
} 