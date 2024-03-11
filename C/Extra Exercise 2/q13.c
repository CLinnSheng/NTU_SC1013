#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main()
{
 char a[80],b[80];
 char c[80];
 printf("Enter the first string a: \n");
 scanf("%s",a);
 printf("Enter the second string b: \n");
 scanf("%s",b);
 mergeStr(a,b,c);
 printf("mergeStr(): %s", c);
 return 0;
}
void mergeStr(char *a, char *b, char *c)
{
    char temp[80];
    strcpy(temp, a); strcat(temp, b);
    strcpy(c, temp);

    for (int i = 0; i < strlen(c) - 1; i++)
        for (int j = 0; j < strlen(c) - i - 1; j++)
            if (*(c + j) > *(c + j + 1)){
                char tempC = *(c + j);
                *(c + j) = *(c + j + 1);
                *(c + j + 1) = tempC;
            }
}