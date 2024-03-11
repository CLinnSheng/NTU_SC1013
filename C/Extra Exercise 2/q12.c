#include <stdio.h>
void sortCharStr(char *str);
int main()
{
 char str[80];

 printf("Enter a string: \n");
 scanf("%s",str);
 sortCharStr(str);
 printf("sortCharStr(): %s\n", str);
 return 0;
}
void sortCharStr(char *str)
{
    for (int i = 0; i < strlen(str) - 1; i++)
        for (int j = 0; j < strlen(str) - i - 1; j++)
            if (*(str + j) > *(str + j + 1)){
                char temp = *(str + j);
                *(str + j) = *(str + j + 1);
                *(str + j + 1) = temp;
            }
            
}